/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNDirectMessageEntry, TFNDirectMessageMediaAttachment;
@interface T1DirectMessageConversationMessageEntrySlideData : NSObject {

	id<TFNDirectMessageEntry> _messageEntry;
	id<TFNDirectMessageMediaAttachment> _mediaAttachment;
	/*^block*/id _previewImageBlock;

}

@property (nonatomic,copy) id<TFNDirectMessageEntry> messageEntry;                           //@synthesize messageEntry=_messageEntry - In the implementation block
@property (nonatomic,copy) id<TFNDirectMessageMediaAttachment> mediaAttachment;              //@synthesize mediaAttachment=_mediaAttachment - In the implementation block
@property (nonatomic,copy) id previewImageBlock;                                             //@synthesize previewImageBlock=_previewImageBlock - In the implementation block
-(id<TFNDirectMessageEntry>)messageEntry;
-(id)previewImageBlock;
-(void)setPreviewImageBlock:(id)arg1 ;
-(id<TFNDirectMessageMediaAttachment>)mediaAttachment;
-(void)setMediaAttachment:(id<TFNDirectMessageMediaAttachment>)arg1 ;
-(id)initWithMessageEntry:(id)arg1 mediaAttachment:(id)arg2 previewImageBlock:(/*^block*/id)arg3 ;
-(void)setMessageEntry:(id<TFNDirectMessageEntry>)arg1 ;
-(id)init;
@end

