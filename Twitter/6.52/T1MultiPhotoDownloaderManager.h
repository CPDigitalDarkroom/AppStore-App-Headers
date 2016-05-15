/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNDownloadDelegate;
#import <Twitter/Twitter-Structs.h>
@class NSMutableArray;

@interface T1MultiPhotoDownloaderManager : NSObject {

	NSMutableArray* _downloaders;
	id<TFNDownloadDelegate> _downloadingObserver;

}

@property (nonatomic,retain) NSMutableArray * downloaders;                                      //@synthesize downloaders=_downloaders - In the implementation block
@property (nonatomic,__weak,readonly) id<TFNDownloadDelegate> downloadingObserver;              //@synthesize downloadingObserver=_downloadingObserver - In the implementation block
@property (nonatomic,readonly) unsigned downloadersCount; 
-(id)initWithDownloadingObserver:(id)arg1 ;
-(id)_downloaderAtIndex:(unsigned)arg1 ;
-(unsigned)downloadersCount;
-(id)downloaderForDownload:(id)arg1 ;
-(void)addDownload:(id)arg1 contentMode:(int)arg2 size:(CGSize)arg3 index:(int)arg4 isRetrying:(char)arg5 ;
-(char)isDownloaderRetryingAtIndex:(unsigned)arg1 ;
-(void)resetDownloaders;
-(NSMutableArray *)downloaders;
-(void)setDownloaders:(NSMutableArray *)arg1 ;
-(id<TFNDownloadDelegate>)downloadingObserver;
-(id)init;
@end

