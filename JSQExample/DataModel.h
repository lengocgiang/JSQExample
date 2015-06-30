//
//  DataModel.h
//  JSQExample
//
//  Created by Le Ngoc Giang on 6/29/15.
//  Copyright (c) 2015 giangle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JSQMessages.h>

static NSString * const kJSQDemoAvatarDisplayName   = @"Me";
static NSString * const kJSQDemoAvatarDisplayCook   = @"Cook";
static NSString * const kJSQDemoAvatarDisplayJobs   = @"Jobs";
static NSString * const kJSQDemoAvatarDisplayWoz    = @"Woz";

static NSString * const kJSQDemoAvatarIDName        = @"053496-4509-289";
static NSString * const kJSQDemoAvatarIDCook        = @"468-768355-23123";
static NSString * const kJSQDemoAvatarIDJobs        = @"707-8956784-57";
static NSString * const kJSQDemoAvatarIDWoz         = @"309-41802-93823";

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
