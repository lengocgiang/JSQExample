//
//  DataModel.h
//  JSQExample
//
//  Created by Le Ngoc Giang on 6/29/15.
//  Copyright (c) 2015 giangle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JSQMessages.h>

@interface DataModel : NSObject

@property (strong, nonatomic) NSMutableArray            *messages;

@property (strong, nonatomic) NSDictionary              *avatars;

@property (strong, nonatomic) JSQMessagesBubbleImage    *outgoingBubbleImageData;

@property (strong, nonatomic) JSQMessagesBubbleImage    *incomingBubbleImageData;

@property (strong, nonatomic) NSDictionary              *users;

// Public message
- (void)addPhotoMediaMessage;

- (void)addLocationMediaMessageCompletion:(JSQLocationMediaItemCompletionBlock)completion;

- (void)addVideoMediaMessage;


@end
