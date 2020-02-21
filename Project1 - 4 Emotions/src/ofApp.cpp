#include "ofApp.h"

int w = 500; //
int h = 250; //
int r = 50;
float CountFrame = ofGetFrameNum();

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(38,150,120,100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // num / 120 % 4 >=0
    ofVec2f PeterCenter(w,h);
    //Peter's body
    ofSetColor(42,64,238,200);
    ofDrawRectangle(w-2 * r,h-r,2 * r,4.5 * r);
    ofDrawRectangle(w - 3 * r,h+2 * r, 3 * r, 1.5 * r);
    
    //Peter's head
    ofSetCircleResolution(100);
    ofSetColor(255,67,152);
    ofDrawCircle(PeterCenter,r);
    
    if ( ofGetFrameNum() % 120 >= 0 && ofGetFrameNum() <= 120 ){
         
         //Peter's eye
         ofSetColor(255,255,255);
         ofDrawEllipse(w-0.5*r, h, 35, 25);
         ofSetColor(42,64,238);
         ofDrawCircle(w-0.5*r,h,10);

         ofSetColor(255,255,255);
         ofDrawEllipse(w+0.5*r, h, 35, 25);
         ofSetColor(42,64,238);
         ofDrawCircle(w+0.5*r,h,10);

         //Peter's mouth
         ofSetColor(255,210,0);
         ofDrawRectangle(w-r/4,h+r/4,r/2,10);
    }

    int num = ((ofGetFrameNum()-120)/120)%4;
    
    if(num == 0){
        ofSetColor(255,210,0);
        ofDrawBezier(w-r/4, h+r/4, w-r/4+5, h+r/4+10,w-r/4+r/2-5, h+r/4+10,w-r/4+r/2, h+r/4); //Happiness
        
        ofSetColor(255,255,255);
        ofDrawEllipse(w-0.5*r, h, 35, 25);
        ofSetColor(42,64,238);
        ofDrawCircle(w-0.5*r,h,10);
        
        ofSetColor(255,255,255);
        ofDrawEllipse(w+0.5*r, h, 35, 25);
        ofSetColor(42,64,238);
        ofDrawCircle(w+0.5*r,h,10);
    }else if(num == 1 && ofGetFrameNum() >= 180){
        ofSetColor(42,64,238);
        ofDrawBezier(w-r/4, h+r/4, w-r/4+5, h+r/4-10,w-r/4+r/2-5, h+r/4-10,w-r/4+r/2, h+r/4); //Sadness
        
        ofSetColor(255,255,255);
        ofDrawEllipse(w-0.5*r, h, 35, 15);
        ofSetColor(42,64,238);
        ofDrawCircle(w-0.5*r+3,h+3,7);
        
        ofSetColor(255,255,255);
        ofDrawEllipse(w+0.5*r, h, 35, 15);
        ofSetColor(42,64,238);
        ofDrawCircle(w+0.5*r+3,h+3,7);
    }else if(num == 2 && ofGetFrameNum() >= 240){
        ofSetColor(164,255,0);
        ofDrawEllipse(w, h+r/2, 25, 35);//suprise
        
        ofSetColor(255,255,255);
        ofDrawEllipse(w-0.5*r, h, 35, 35);
        ofSetColor(42,64,238);
        ofDrawCircle(w-0.5*r,h,10);
        
        ofSetColor(255,255,255);
        ofDrawEllipse(w+0.5*r, h, 35, 35);
        ofSetColor(42,64,238);
        ofDrawCircle(w+0.5*r,h,10);
    }else if(num == 3){
        ofSetColor(0,0,0);
        ofDrawBezier(w-r/4, h+r/2, w-r/4+5, h+r/4-10,w-r/4+r/2-5, h+r/4-10,w-r/4+r/2, h+r/2); //Angry
                
        ofSetColor(255,255,255);
        ofDrawEllipse(w-0.5*r, h, 40, 35);
        ofSetColor(42,64,238);
        ofDrawCircle(w-0.5*r,h-8,10);
                
        ofSetColor(255,255,255);
        ofDrawEllipse(w+0.5*r, h, 40, 35);
        ofSetColor(42,64,238);
        ofDrawCircle(w+0.5*r,h-8,10);
    
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
