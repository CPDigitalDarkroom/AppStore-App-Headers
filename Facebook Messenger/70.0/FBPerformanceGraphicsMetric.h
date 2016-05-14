/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPerformanceGraphMetricProvider.h>

@class CADisplayLink, NSMutableArray;

@interface FBPerformanceGraphicsMetric : NSObject <FBPerformanceGraphMetricProvider> {

	float _fps;
	double _lastFrameTimestamp;
	CADisplayLink* _displayLink;
	NSMutableArray* _history;

}
-(id)yAxisTitle;
-(id)yAxisUnit;
-(float)yMin;
-(float)yMax;
-(void)willBackground;
-(void)_updateWithDisplayLink:(id)arg1 ;
-(id)init;
-(id)title;
-(id)values;
-(double)updateInterval;
-(void)willForeground;
@end

