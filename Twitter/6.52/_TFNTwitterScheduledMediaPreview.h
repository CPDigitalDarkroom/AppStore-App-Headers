/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterScheduledMediaPreview.h>

@class _TFNTwitterScheduledMediaPreviewInfo, NSString;

@interface _TFNTwitterScheduledMediaPreview : NSObject <TFNTwitterScheduledMediaPreview> {

	_TFNTwitterScheduledMediaPreviewInfo* _original;
	_TFNTwitterScheduledMediaPreviewInfo* _thumbnail;

}

@property (nonatomic,retain) _TFNTwitterScheduledMediaPreviewInfo * original;                              //@synthesize original=_original - In the implementation block
@property (nonatomic,retain) _TFNTwitterScheduledMediaPreviewInfo * thumbnail;                             //@synthesize thumbnail=_thumbnail - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFNTwitterScheduledMediaPreviewInfo> originalMediaPreview; 
@property (nonatomic,readonly) id<TFNTwitterScheduledMediaPreviewInfo> thumbnailMediaPreview; 
-(void)setOriginal:(_TFNTwitterScheduledMediaPreviewInfo *)arg1 ;
-(id<TFNTwitterScheduledMediaPreviewInfo>)originalMediaPreview;
-(id<TFNTwitterScheduledMediaPreviewInfo>)thumbnailMediaPreview;
-(_TFNTwitterScheduledMediaPreviewInfo *)thumbnail;
-(void)setThumbnail:(_TFNTwitterScheduledMediaPreviewInfo *)arg1 ;
-(_TFNTwitterScheduledMediaPreviewInfo *)original;
@end

