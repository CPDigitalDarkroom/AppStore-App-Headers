/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMediaTrayAnalyticsLogging.h>

@class FBAnimationPerformanceLogger, NSString;

@interface MNMediaTrayAnalyticsLogger : NSObject <MNMediaTrayAnalyticsLogging> {

	FBAnimationPerformanceLogger* _scrollPerfTracker;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_logEvent:(id)arg1 ;
-(void)didShowMediaTray;
-(void)didBeginScroll;
-(void)didSelectPhotoAtPosition:(int)arg1 ;
-(void)didSelectVideoAtPosition:(int)arg1 ;
-(void)didDeselectPhotoAtPosition:(int)arg1 ;
-(void)didDeselectVideoAtPosition:(int)arg1 ;
-(void)didTapToSendPhotoAtPosition:(int)arg1 ;
-(void)didTapToSendVideoAtPosition:(int)arg1 ;
-(void)didTapGalleryIcon;
-(void)didSelectVideoTooLongWithDuration:(id)arg1 maxDuration:(id)arg2 ;
-(void)didSelectAnimatedGIFTooLongWithFileSize:(id)arg1 maxFileSize:(id)arg2 ;
-(void)didWantThumbnail;
-(void)didFindThumbnailInCacheWithCacheSize:(int)arg1 ;
-(void)didGenerateThumbnailWithCacheSize:(int)arg1 timeToCropThumbnail:(float)arg2 timeToBlurThumbnail:(float)arg3 ;
-(void)_initScrollPerfTrackerIfNeeded:(char)arg1 ;
-(void)_logEvent:(id)arg1 withExtraData:(id)arg2 ;
-(void)_logEvent:(id)arg1 atPosition:(int)arg2 ;
-(id)initWithShouldReportStackTraces:(char)arg1 ;
-(void)didEndScroll;
@end

