/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PReplayChunk;

@interface PReplayChunkPlaylist : NSObject {

	NSArray* _chunks;
	PReplayChunk* _dummyChunkForSearch;

}
+(/*^block*/id)ComparatorForReplayChunks;
-(void)fixChunksWithNoTime:(id)arg1 ;
-(id)closestLoadedChunkWithClosestIndex:(unsigned)arg1 ;
-(void)getPreLoadedAndBestThumbnailForVideoPosition:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)preloadThumbnails;
-(id)initWithDictionary:(id)arg1 ;
@end

