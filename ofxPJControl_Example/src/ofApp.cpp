#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(ofColor::black);
    
    projector.setup();
    string myProjectorIP = "192.168.0.8";

    //Plug an ethernet into your projector and check it settings to find this IP
    projector.setProjectorIP(myProjectorIP);
    
    //You can set a password on your projector to access PJ Link
    projector.setProjectorPassword("panasonic");
    projector.setProjectorType(PJLINK_MODE);
    
    
    addressDebug = myProjectorIP;
    colorDebug = ofColor::red;
    ofSetCircleResolution(60);
}

//--------------------------------------------------------------
void ofApp::update(){

    

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(ofColor::green);
    ofDrawBitmapString("Projector IP Address: " + ofToString(addressDebug), ofPoint(ofGetWidth() * .10, ofGetHeight() * .15));
     ofDrawBitmapString("Press '1' ON / Press '2' OFF", ofPoint(ofGetWidth() * .10, ofGetHeight() * .25));
    
    ofSetColor(colorDebug);
    ofCircle(ofPoint(ofGetWidth() * .5, ofGetHeight() * .5), 30);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    //Now turn it off and on//
    
    if(key == '1') {
        projector.On();
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::green;

    }
    
    if (key == '2') {
        projector.Off();
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == '3') {
        projector.mute();
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == '4') {
        projector.unmute();
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == '5') {
        projector.setInput(3,1);
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == '6') {
        projector.setInput(3,2);
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == '7') {
        projector.setInput(1,2);
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == '8') {
        projector.setInput(1,1);
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    if (key == '9') {
        projector.setInput(2,1);
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    if (key == '0') {
        projector.setInput(3,3);
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == 'a') {
        projector.getProjectorLampStatus();
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == 's') {
        projector.getProjectorInputStatus();
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }
    
    if (key == 'd') {
        projector.getProjectorPowerStatus();
        cout << projector.getProjectorStatus() << endl;
        colorDebug = ofColor::crimson;
    }

	if (key == 'f') {
		projector.getProjectorName();
		cout << projector.getProjectorStatus() << endl;
		colorDebug = ofColor::crimson;
	}

	if (key == 'g') {
		projector.getProjectorInputList();
		cout << projector.getProjectorStatus() << endl;
		colorDebug = ofColor::crimson;
	}

	if (key == 'h') {
		projector.getProjectorManufacturer();
		cout << projector.getProjectorStatus() << endl;
		colorDebug = ofColor::crimson;
	}

	if (key == 'j') {
		projector.getProjectorPowerStatus();
		cout << projector.getProjectorStatus() << endl;
		colorDebug = ofColor::crimson;
	}

    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
