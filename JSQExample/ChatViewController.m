//
//  ViewController.m
//  JSQExample
//
//  Created by Le Ngoc Giang on 6/29/15.
//  Copyright (c) 2015 giangle. All rights reserved.
//
#import "AppDelegate.h"
#import "ChatViewController.h"

@interface ChatViewController ()

@end

@implementation ChatViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - JSQMessagesViewController methods overrides

- (void)didPressSendButton:(UIButton *)button
           withMessageText:(NSString *)text
                  senderId:(NSString *)senderId
         senderDisplayName:(NSString *)senderDisplayName
                      date:(NSDate *)date
{
    /**
     *  Sending a message . your implementation of this methods should do
     *  *at least*
     *
     *  1. Play sound
     *  2. Add new id<JSQMessageData> object to your data source
     *  3. Call 'finishSendingMessage'
     */
    [JSQSystemSoundPlayer jsq_playMessageSentSound];
    
    JSQMessage *message = [[JSQMessage alloc]initWithSenderId:senderId
                                            senderDisplayName:senderDisplayName date:date text:text];
    
}

@end
