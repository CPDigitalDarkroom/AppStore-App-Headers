/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBComponentWorkingRangeSnapshot.h>

@class NSArray;

@interface FBMutableComponentWorkingRangeSnapshot : FBComponentWorkingRangeSnapshot {

	NSArray* _itemViewStates;
	double _timestamp;
	CGRect _visibleBounds;

}

@property (assign,nonatomic) CGRect visibleBounds;                //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,copy) NSArray * itemViewStates;              //@synthesize itemViewStates=_itemViewStates - In the implementation block
@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
-(void)setItemViewStates:(NSArray *)arg1 ;
-(NSArray *)itemViewStates;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)visibleBounds;
-(void)setVisibleBounds:(CGRect)arg1 ;
@end

