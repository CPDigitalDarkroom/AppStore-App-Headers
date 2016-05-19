/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/GCKDeviceManagerDelegate.h>
#import <Spotify/GCKDeviceManagerDelegateInternal.h>

@protocol GCKDeviceFilterDelegate;
@class GCKDeviceManager, NSString, NSMutableArray, NSError;

@interface GCKDeviceFilter : NSObject <GCKDeviceManagerDelegate, GCKDeviceManagerDelegateInternal> {

	GCKDeviceManager* _deviceManager;
	NSString* _applicationID;
	NSMutableArray* _namespaces;
	long long _filterSessionID;
	char _deviceChanged;
	char _appAvailable;
	char _cancelled;
	char _filterMatched;
	NSError* _filterError;
	char _filterFinished;
	char _deviceConfigurationReceived;
	char _deviceIDChanged;
	int _filterID;
	char _active;
	id<GCKDeviceFilterDelegate> _delegate;

}

@property (nonatomic,readonly) char active;                                            //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<GCKDeviceFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notifyFilteringFailedForDevice:(id)arg1 withError:(id)arg2 ;
-(void)notifyFilteringFinishedForDevice:(id)arg1 withResult:(char)arg2 deviceChanged:(char)arg3 deviceIDChanged:(char)arg4 ;
-(char)shouldWaitForDeviceConfiguration;
-(id)buildStatusTextForDevice:(id)arg1 runningApplication:(id)arg2 applicationStatusText:(id)arg3 ;
-(void)deviceManagerDidConnect:(id)arg1 ;
-(void)deviceManager:(id)arg1 didFailToConnectWithError:(id)arg2 ;
-(void)deviceManager:(id)arg1 didDisconnectWithError:(id)arg2 ;
-(void)deviceManager:(id)arg1 request:(int)arg2 didFailWithError:(id)arg3 ;
-(void)deviceManager:(id)arg1 didReceiveAppAvailability:(id)arg2 ;
-(void)deviceManagerDidUpdateStatus:(id)arg1 ;
-(void)deviceManager:(id)arg1 didReceiveDeviceConfiguration:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 filterID:(int)arg2 ;
-(void)filterDevice:(id)arg1 forApplicationID:(id)arg2 namespaces:(id)arg3 ;
-(void)setDelegate:(id<GCKDeviceFilterDelegate>)arg1 ;
-(void)dealloc;
-(id<GCKDeviceFilterDelegate>)delegate;
-(void)stop;
-(char)active;
@end

