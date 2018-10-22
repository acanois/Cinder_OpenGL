#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;

class IndigoApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
    
    CameraPersp mCam;       // Camera
    gl::BatchRef mCube;     // Batch
    gl::GlslProgRef mGlsl;  // Shader program
};

void IndigoApp::setup()
{
    // Init camera
    mCam.lookAt( vec3( 3, 2, 4 ), vec3( 0 ) );
    
    mGlsl = gl::GlslProg::create( loadAsset( "shader.vert" ), loadAsset( "shader.frag" ) );
    
    mCube = gl::Batch::create( geom::Cube(), mGlsl );
    
    gl::enableDepthRead();
    gl::enableDepthWrite();
}

void IndigoApp::mouseDown( MouseEvent event )
{
}

void IndigoApp::update()
{
}

void IndigoApp::draw()
{
	gl::clear( Color( 0.0f, 0.0f, 0.0f ) );
    gl::setMatrices( mCam );
    mCube->draw();
}

CINDER_APP( IndigoApp, RendererGl )
