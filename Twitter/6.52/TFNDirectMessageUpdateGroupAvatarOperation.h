/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNConcurrentOperation.h>

@protocol TFNDirectMessageContext;
@class TFNDirectMessageConversation, TFNTwitterMediaAsset, TFNDirectMessageUpdateGroupAvatarProgress, NSOperation;

@interface TFNDirectMessageUpdateGroupAvatarOperation : TFNConcurrentOperation {

	TFNDirectMessageConversation* _conversation;
	TFNTwitterMediaAsset* _asset;
	id<TFNDirectMessageContext> _context;
	/*^block*/id _completion;
	TFNDirectMessageUpdateGroupAvatarProgress* _progress;
	NSOperation* _uploadAvatarOperation;
	NSOperation* _postGroupAvatarUpdateOperation;

}

@property (nonatomic,readonly) TFNDirectMessageConversation * conversation;                       //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) TFNTwitterMediaAsset * asset;                                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<TFNDirectMessageContext> context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) TFNDirectMessageUpdateGroupAvatarProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSOperation * uploadAvatarOperation;                               //@synthesize uploadAvatarOperation=_uploadAvatarOperation - In the implementation block
@property (nonatomic,readonly) NSOperation * postGroupAvatarUpdateOperation;                      //@synthesize postGroupAvatarUpdateOperation=_postGroupAvatarUpdateOperation - In the implementation block
-(id)initWithConversation:(id)arg1 asset:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_generateOperations;
-(void)_setupOperationDependencies;
-(void)_scheduleOperations;
-(NSOperation *)uploadAvatarOperation;
-(NSOperation *)postGroupAvatarUpdateOperation;
-(void)cancel;
-(id<TFNDirectMessageContext>)context;
-(id)completion;
-(TFNDirectMessageUpdateGroupAvatarProgress *)progress;
-(void)main;
-(TFNTwitterMediaAsset *)asset;
-(TFNDirectMessageConversation *)conversation;
@end

