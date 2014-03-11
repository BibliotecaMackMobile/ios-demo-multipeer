//
//  ViewController.h
//  SimpleChat
//
//  Created by Tung Nguyen on 9/27/13.
//  Copyright (c) 2013 Tung Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

@interface ViewController : UIViewController <MCBrowserViewControllerDelegate, MCSessionDelegate, UITextFieldDelegate>


@property (nonatomic, strong) MCBrowserViewController *browserVC;
@property (nonatomic, strong) MCAdvertiserAssistant *advertiser;
@property (nonatomic, strong) MCSession *mySession;
@property (nonatomic, strong) MCPeerID *myPeerID;

@property (nonatomic, strong) UIButton *browserButton;
@property (nonatomic, strong) UITextField *chatBox;
@property (nonatomic, strong) UITextView *textBox;

@end
