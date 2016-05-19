/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/CBCentralManagerDelegate.h>

@class CBCentralManager, NSString;

@interface SPTPartyBluetoothDetectionManager : NSObject <CBCentralManagerDelegate> {

	int _state;
	/*^block*/id _monitorBlock;
	CBCentralManager* _manager;

}

@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id monitorBlock;                           //@synthesize monitorBlock=_monitorBlock - In the implementation block
@property (nonatomic,retain) CBCentralManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMonitorBlock:(/*^block*/id)arg1 ;
-(id)monitorBlock;
-(void)setMonitorBlock:(id)arg1 ;
-(void)setManager:(CBCentralManager *)arg1 ;
-(CBCentralManager *)manager;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
@end

