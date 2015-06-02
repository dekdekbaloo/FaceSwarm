#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class FaceSwarmApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void FaceSwarmApp::setup()
{
}

void FaceSwarmApp::mouseDown( MouseEvent event )
{
}

void FaceSwarmApp::update()
{
}

void FaceSwarmApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( FaceSwarmApp, RendererGl )
