/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@class NSString;

@interface FBSaveFeedNuxLanguageExperimentContext : FBExperimentContext {

	char _useAutoplayNux;
	NSString* _bookmarkNux;
	NSString* _linkNux;
	NSString* _videoNux;
	NSString* _postNux;
	NSString* _photoNux;

}

@property (nonatomic,copy) NSString * bookmarkNux;               //@synthesize bookmarkNux=_bookmarkNux - In the implementation block
@property (nonatomic,copy) NSString * linkNux;                   //@synthesize linkNux=_linkNux - In the implementation block
@property (nonatomic,copy) NSString * videoNux;                  //@synthesize videoNux=_videoNux - In the implementation block
@property (nonatomic,copy) NSString * postNux;                   //@synthesize postNux=_postNux - In the implementation block
@property (nonatomic,copy) NSString * photoNux;                  //@synthesize photoNux=_photoNux - In the implementation block
@property (nonatomic,readonly) char useAutoplayNux;              //@synthesize useAutoplayNux=_useAutoplayNux - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(void)setBookmarkNux:(NSString *)arg1 ;
-(void)setLinkNux:(NSString *)arg1 ;
-(void)setVideoNux:(NSString *)arg1 ;
-(void)setPostNux:(NSString *)arg1 ;
-(void)setPhotoNux:(NSString *)arg1 ;
-(NSString *)bookmarkNux;
-(NSString *)linkNux;
-(NSString *)videoNux;
-(NSString *)postNux;
-(NSString *)photoNux;
-(char)useAutoplayNux;
@end

