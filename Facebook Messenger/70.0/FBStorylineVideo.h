/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBStorylineAsset.h>

@class NSString, NSNumber, FBStorylineImage, NSDate, NSArray, NSDictionary;

@interface FBStorylineVideo : FBValueObject <NSCopying, NSCoding, FBStorylineAsset> {

	char _muted;
	NSString* _videoId;
	NSString* _videoAssetURL;
	NSNumber* _width;
	NSNumber* _height;
	FBStorylineImage* _image;
	NSDate* _date;
	unsigned _cutsCount;
	unsigned _maximumCuts;
	double _startTime;
	double _endTime;
	double _videoLength;

}

@property (nonatomic,copy,readonly) NSString * videoId;                           //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoAssetURL;                     //@synthesize videoAssetURL=_videoAssetURL - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * width;                             //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * height;                            //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) FBStorylineImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) double startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                    //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double videoLength;                                //@synthesize videoLength=_videoLength - In the implementation block
@property (nonatomic,readonly) unsigned cutsCount;                                //@synthesize cutsCount=_cutsCount - In the implementation block
@property (nonatomic,readonly) unsigned maximumCuts;                              //@synthesize maximumCuts=_maximumCuts - In the implementation block
@property (nonatomic,readonly) char muted;                                        //@synthesize muted=_muted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * assetId; 
@property (nonatomic,copy,readonly) NSString * originalAssetId; 
@property (nonatomic,copy,readonly) FBStorylineImage * lowResImage; 
@property (nonatomic,copy,readonly) FBStorylineImage * highResImage; 
@property (nonatomic,copy,readonly) NSArray * faceboxes; 
@property (nonatomic,copy,readonly) NSDictionary * faceboxRect; 
@property (nonatomic,copy,readonly) NSString * thumbnailURL; 
-(NSString *)videoId;
-(NSString *)assetId;
-(char)isEqualToStorylineAsset:(id)arg1 ;
-(NSString *)originalAssetId;
-(FBStorylineImage *)lowResImage;
-(FBStorylineImage *)highResImage;
-(NSArray *)faceboxes;
-(NSDictionary *)faceboxRect;
-(id)initWithVideoId:(id)arg1 videoAssetURL:(id)arg2 width:(id)arg3 height:(id)arg4 image:(id)arg5 date:(id)arg6 videoLength:(double)arg7 maximumCuts:(unsigned)arg8 muted:(char)arg9 ;
-(void)updateStartTime:(double)arg1 endTime:(double)arg2 ;
-(void)updateMuteState:(char)arg1 ;
-(NSString *)videoAssetURL;
-(unsigned)maximumCuts;
-(unsigned)cutsCount;
-(char)muted;
-(NSDate *)date;
-(FBStorylineImage *)image;
-(NSNumber *)width;
-(NSNumber *)height;
-(double)startTime;
-(double)endTime;
-(NSString *)thumbnailURL;
-(double)videoLength;
@end

