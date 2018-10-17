#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class IndigoApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void IndigoApp::setup()
{
}

void IndigoApp::mouseDown( MouseEvent event )
{
}

void IndigoApp::update()
{
}

void IndigoApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( IndigoApp, RendererGl )
