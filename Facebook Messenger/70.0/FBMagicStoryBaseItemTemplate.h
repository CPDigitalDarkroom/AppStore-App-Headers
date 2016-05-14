/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSArray;

@interface FBMagicStoryBaseItemTemplate : NSObject {

	float _xOffset;
	float _yOffset;
	NSArray* _indexPaths;
	NSArray* _photoSizes;
	float _maxWidth;
	int _section;
	float _interItemSpacing;

}

@property (assign,nonatomic) float xOffset;                       //@synthesize xOffset=_xOffset - In the implementation block
@property (assign,nonatomic) float yOffset;                       //@synthesize yOffset=_yOffset - In the implementation block
@property (nonatomic,copy) NSArray * indexPaths;                  //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,copy) NSArray * photoSizes;                  //@synthesize photoSizes=_photoSizes - In the implementation block
@property (assign,nonatomic) float maxWidth;                      //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) int section;                         //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) float interItemSpacing;              //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
+(char)isPortraitPhoto:(CGSize)arg1 ;
+(char)isLandscapePhoto:(CGSize)arg1 ;
-(float)threeUnitWidth;
-(float)xOffset;
-(void)setXOffset:(float)arg1 ;
-(float)interItemSpacing;
-(void)setInterItemSpacing:(float)arg1 ;
-(int)section;
-(float)maxWidth;
-(float)yOffset;
-(void)setYOffset:(float)arg1 ;
-(void)setMaxWidth:(float)arg1 ;
-(void)setSection:(int)arg1 ;
-(NSArray *)photoSizes;
-(void)setPhotoSizes:(NSArray *)arg1 ;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(NSArray *)indexPaths;
@end

