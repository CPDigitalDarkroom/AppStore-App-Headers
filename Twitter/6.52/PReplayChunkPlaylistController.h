/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/SQWorkClientDelegate.h>

@protocol PReplayChunkPlaylistControllerDelegate;
@class SQWorkClient, NSString, PReplayChunkPlaylist;

@interface PReplayChunkPlaylistController : NSObject <SQWorkClientDelegate> {

	id<PReplayChunkPlaylistControllerDelegate> _delegate;
	SQWorkClient* _workClient;
	NSString* _broadcastID;
	PReplayChunkPlaylist* _replayChunkPlaylist;

}

@property (nonatomic,readonly) PReplayChunkPlaylist * replayChunkPlaylist; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)immediate:(id)arg1 context:(id)arg2 loadingFromNetwork:(char)arg3 ;
-(void)error:(id)arg1 context:(id)arg2 ;
-(void)eventual:(id)arg1 context:(id)arg2 ;
-(id)initWithBroadcastId:(id)arg1 delegate:(id)arg2 ;
-(PReplayChunkPlaylist *)replayChunkPlaylist;
-(void)load:(int)arg1 ;
-(void)loadIfNeeded;
-(id)context;
@end

