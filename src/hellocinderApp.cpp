#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/ImageIo.h"
#include "cinder/gl/Texture.h"

#include "ParticleController.h"

using namespace ci;
using namespace ci::app;
using namespace std;

#define RESOLUTION 10

class hellocinderApp : public AppBasic {
  
    public:
    void prepareSettings(Settings *settings);
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
    
    //gl::Texture myImage;
    
    ParticleController mParticleController;
    
    Channel32f mChannel;
};

void hellocinderApp::prepareSettings(Settings *settings){
    settings->setWindowSize(800, 600);
    settings->setFrameRate(60.0f);
}

void hellocinderApp::setup()
{
    
   // myImage = gl::Texture(loadImage(loadResource("image.jpg")));
    
    //mParticleController.addParticles(50);
    mParticleController = ParticleController( RESOLUTION);
    
    Url url("http://www.flight404.com/_images/paris.jpg");
    
    mChannel = Channel32f (loadImage( loadUrl(url)) );

}

void hellocinderApp::mouseDown( MouseEvent event )
{
}

void hellocinderApp::update()
{
    
//    mParticleController.update();
    mParticleController.update(mChannel);

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
