/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLoomQPLListenerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLoomTraceControlling.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLoomConfigurable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLoomTraceProvider.h>

@class FBLoomTraceManager, NSNumber, NSDictionary, NSString;

@interface FBLoomQPLController : NSObject <FBLoomQPLListenerDelegate, FBLoomTraceControlling, FBLoomConfigurable, FBLoomTraceProvider> {

	shared_ptr<FBLoomQPLListener>* _listener;
	unique_ptr<facebook::mobile::xplat::executor::InlineSyncExecutor, std::__1::default_delete<facebook::mobile::xplat::executor::InlineSyncExecutor> >* _executor;
	atomic<bool> _isTracing;
	mutex _traceControlMutex;
	NSNumber* _activeUniqueID;
	NSNumber* _activeMarkerID;
	NSNumber* _activeTraceID;
	NSDictionary* _sampleRateByMarkerID;
	NSDictionary* _providersByMarkerID;
	FBLoomTraceManager* _traceManager;

}

@property (__weak) FBLoomTraceManager * manager;                    //@synthesize traceManager=_traceManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyForConfiguration;
-(void)updateConfigurationWithArray:(id)arg1 ;
-(void)invalidateConfiguration;
-(char)traceManager:(id)arg1 traceDidTimeout:(id)arg2 ;
-(void)loomTraceWillBegin;
-(void)loomTraceDidEnd;
-(unsigned)eventProviderIdentifier;
-(id)customHeader;
-(char)beginTraceWithMarkerID:(int)arg1 uniqueID:(int)arg2 ;
-(FBLoomLogEntry*)QPLEntryWithMarkerID:(int)arg1 uniqueID:(int)arg2 timestamp:(long long)arg3 entryType:(int)arg4 ;
-(void)writeQPLEntry:(FBLoomLogEntry*)arg1 ;
-(void)abortTraceWithUniqueID:(int)arg1 markerID:(int)arg2 ;
-(void)endTraceWithMarkerID:(int)arg1 uniqueID:(int)arg2 ;
-(char)shouldSampleQPLEventWithMarkerID:(int)arg1 ;
-(int)providersForQPLEventWithMarkerID:(int)arg1 ;
-(void)QPLTraceDidStartWithMarkerID:(int)arg1 uniqueID:(int)arg2 ;
-(void)QPLTraceWillCancelWithMarkerID:(int)arg1 uniqueID:(int)arg2 ;
-(void)QPLTraceDidAnnotateWithMarkerID:(int)arg1 annotationKey:(const char*)arg2 annotationValue:(const char*)arg3 uniqueID:(int)arg4 ;
-(void)QPLTraceDidTagWithMarkerID:(int)arg1 tag:(const char*)arg2 uniqueID:(int)arg3 ;
-(void)QPLTraceDidNoteWithMarkerID:(int)arg1 actionID:(short)arg2 noteTag:(const char*)arg3 timestamp:(long long)arg4 uniqueID:(int)arg5 ;
-(void)QPLTraceWillEndWithMarkerID:(int)arg1 actionID:(short)arg2 timestamp:(long long)arg3 uniqueID:(int)arg4 ;
-(void)setManager:(FBLoomTraceManager *)arg1 ;
-(FBLoomTraceManager *)manager;
-(id)init;
@end

