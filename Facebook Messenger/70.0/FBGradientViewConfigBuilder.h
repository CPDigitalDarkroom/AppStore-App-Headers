/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBUIConfigBuilder.h>

@class NSArray, UIColor, NSString;

@interface FBGradientViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	NSArray* _colors;
	NSArray* _locations;
	UIColor* _backgroundColor;
	float _opacity;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,copy) NSArray * colors;                        //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy) NSArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) CGPoint startPoint;                    //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) CGPoint endPoint;                      //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) float opacity;                         //@synthesize opacity=_opacity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(CGPoint)endPoint;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(UIColor *)backgroundColor;
-(id)_init;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(id)build;
@end

