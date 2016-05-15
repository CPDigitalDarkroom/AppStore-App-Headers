/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterRichTimelineStreamOperation.h>

@class NSString;

@interface TFNTwitterAttachHeaderAndFooterOperation : NSObject <TFNTwitterRichTimelineStreamOperation> {

	NSString* _emptyStreamMessage;
	NSString* _emptyStreamMessageSubtext;
	NSString* _loadingFailedMessage;

}

@property (nonatomic,copy) NSString * emptyStreamMessage;                     //@synthesize emptyStreamMessage=_emptyStreamMessage - In the implementation block
@property (nonatomic,copy) NSString * emptyStreamMessageSubtext;              //@synthesize emptyStreamMessageSubtext=_emptyStreamMessageSubtext - In the implementation block
@property (nonatomic,copy) NSString * loadingFailedMessage;                   //@synthesize loadingFailedMessage=_loadingFailedMessage - In the implementation block
+(id)_dummyEndOfStreamMarker;
+(id)_noTweetsMarkerWithText:(id)arg1 subText:(id)arg2 ;
+(id)_dummyLoadingMarkerWithStream:(id)arg1 autoLoadWhenDisplayed:(char)arg2 ;
-(NSString *)loadingFailedMessage;
-(void)setEmptyStreamMessage:(NSString *)arg1 ;
-(NSString *)emptyStreamMessage;
-(NSString *)emptyStreamMessageSubtext;
-(id)filteredStreamObjectsFromStreamObjects:(id)arg1 stream:(id)arg2 ;
-(id)_headerObjectsForStream:(id)arg1 streamObjects:(id)arg2 ;
-(id)_footerObjectsForStream:(id)arg1 streamObjects:(id)arg2 ;
-(id)_mainTextForError:(id)arg1 ;
-(id)_subtextForError:(id)arg1 ;
-(char)_canRetryForError:(id)arg1 ;
-(void)setEmptyStreamMessageSubtext:(NSString *)arg1 ;
-(void)setLoadingFailedMessage:(NSString *)arg1 ;
-(id)init;
@end

