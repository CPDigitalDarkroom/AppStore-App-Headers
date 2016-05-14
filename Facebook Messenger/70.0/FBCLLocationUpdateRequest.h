/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol FBCLLocationUpdateRequestDelegate;
@class CLLocationManager, FBCLLocationCollectionConfig, FBBackgroundTaskHandler, NSMutableArray, FBDelayer, FBCLEventSet, NSArray, NSString;

@interface FBCLLocationUpdateRequest : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	FBCLLocationCollectionConfig* _configuration;
	FBBackgroundTaskHandler* _backgroundTaskHandler;
	unsigned _taskId;
	NSMutableArray* _lastLocations;
	FBDelayer* _locationAcquisionDelayer;
	double _locationRequestStartTime;
	id<FBCLLocationUpdateRequestDelegate> _delegate;
	FBCLEventSet* _eventSet;
	unsigned _state;

}

@property (assign,nonatomic,__weak) id<FBCLLocationUpdateRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locations; 
@property (nonatomic,retain) FBCLEventSet * eventSet;                                            //@synthesize eventSet=_eventSet - In the implementation block
@property (assign,nonatomic) unsigned state;                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) FBCLLocationCollectionConfig * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)location:(id)arg1 withinAccuracy:(float)arg2 andTime:(float)arg3 ;
-(void)addLocations:(id)arg1 ;
-(void)_startUpdatingLocation:(id)arg1 ;
-(void)_stopUpdatingLocation:(id)arg1 ;
-(void)_updateLocationTimeout:(double)arg1 ;
-(id)initWithCLLocationManager:(id)arg1 backgroundTaskHandler:(id)arg2 configuration:(id)arg3 ;
-(void)startRequest:(id)arg1 ;
-(FBCLEventSet *)eventSet;
-(void)setEventSet:(FBCLEventSet *)arg1 ;
-(void)_endBackgroundTask;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setDelegate:(id<FBCLLocationUpdateRequestDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCLLocationUpdateRequestDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)invalidate;
-(void)setConfiguration:(FBCLLocationCollectionConfig *)arg1 ;
-(FBCLLocationCollectionConfig *)configuration;
-(NSArray *)locations;
@end

