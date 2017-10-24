#include "ofApp.h"

//Based off of code for drawing lines found in the OF Book

ofPoint pt;
ofPolyline line;

ofColor color;

//--------------------------------------------------------------
void ofApp::setup(){

  //Sets Background Color to Black
  ofSetBackgroundColor(0,0,0);
  //ofSetColor(255, 255, 255);
  //ofSetLineWidth(10.0); //Line width for drawing is 10
}

//--------------------------------------------------------------
void ofApp::update(){
  
  

}

//--------------------------------------------------------------
void ofApp::draw(){
   //Makes Random Color
  color = ofColor(ofRandom(0,255),
                  ofRandom(0,255),
		  ofRandom(0,255));
    
  ofSetColor(color); //Sets random color
  ofSetLineWidth(ofRandom(1,10));//Sets random line width
  line.draw(); //TRIPPY LINE DRAWN!

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

  pt.set(x,y);
  line.addVertex(pt); //Adds point where your mouse is positioned

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  line.clear();

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
