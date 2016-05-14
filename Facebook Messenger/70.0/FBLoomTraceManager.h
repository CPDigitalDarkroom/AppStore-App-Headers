/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLoomRingBufferReaderDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLoomConfigurable.h>

@protocol FBLoomTraceControlling;
@class FBLoomRingBufferWriter, NSNumber, NSMutableSet, FBLoomQPLController, NSString;

@interface FBLoomTraceManager : NSObject <FBLoomRingBufferReaderDelegate, FBLoomConfigurable> {

	FBLoomRingBufferWriter* _writer;
	mutex _mutex;
	NSNumber* _maximumTraceDuration;
	id<FBLoomTraceControlling> _activeController;
	int _activeProviders;
	char _activeTraceIsManual;
	NSMutableSet* _traceControllers;
	NSMutableSet* _traceProviders;
	FBLoomQPLController* _QPLController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyForConfiguration;
-(void)updateConfigurationWithDictionary:(id)arg1 ;
-(void)invalidateConfiguration;
-(id)initWithRingBufferWriter:(id)arg1 ;
-(id)configurableTraceControllers;
-(void)addTraceController:(id)arg1 ;
-(void)addProvider:(id)arg1 ;
-(id)activateProviders:(int)arg1 andBeginTraceWithController:(id)arg2 ;
-(void)bufferedReader:(id)arg1 didTimeoutWithTrace:(long long)arg2 ;
-(id)customHeadersForProviders:(int)arg1 ;
-(id)defaultTraceControllers;
-(id)defaultTraceProviders;
-(id)activateProviders:(int)arg1 andBeginTraceWithController:(id)arg2 isManual:(char)arg3 ;
-(id)activateProviders:(int)arg1 andBeginManualTraceWithController:(id)arg2 ;
-(char)deactivateProvidersAndEndTraceWithController:(id)arg1 ;
-(char)deactivateProvidersAndAbortTraceWithController:(id)arg1 ;
-(void)setTraceProviders:(id)arg1 ;
-(void)setTraceControllers:(id)arg1 ;
@end

