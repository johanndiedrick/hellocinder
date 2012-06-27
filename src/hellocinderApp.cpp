#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/ImageIo.h"
#include "cinder/gl/Texture.h"

#include "ParticleController.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class hellocinderApp : public AppBasic {
  
    public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
    
    //gl::Texture myImage;
    
    ParticleController mParticleController;
};

void hellocinderApp::setup()
{
    
   // myImage = gl::Texture(loadImage(loadResource("image.jpg")));
    
    mParticleController.addParticles(50);
}

void hellocinderApp::mouseDown( MouseEvent event )
{
}

void hellocinderApp::update()
{
    
    mParticleController.update();
}

void hellocinderApp::draw()
{

	//float gray = sin (getElapsedSeconds()) * 0.5f + 0.5f;
    gl::clear( Color( 0, 0, 0 ), true); 
  //  gl::draw(myImage, getWindowBounds());
    
    //float x = cos(getElapsedSeconds()) * 100.0f;
   //float y = sin(getElapsedSeconds()) * 100.0f;
   //gl::drawSolidCircle( Vec2f(x, y) + getWindowSize()/2, abs(x));
    
    mParticleController.draw();

}


CINDER_APP_BASIC( hellocinderApp, RendererGl )
