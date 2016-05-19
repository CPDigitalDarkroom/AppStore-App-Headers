/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTChurnLockControllerDelegate.h>

@protocol SPTLogCenterProtocol;
@class SPTChurnLockViewController, NSString;

@interface SPTChurnLockPresenter : NSObject <SPTChurnLockControllerDelegate> {

	/*^block*/id _dismissalBlock;
	SPTChurnLockViewController* _churnViewController;
	id<SPTLogCenterProtocol> _logCenter;

}

@property (nonatomic,copy) id dismissalBlock;                                               //@synthesize dismissalBlock=_dismissalBlock - In the implementation block
@property (nonatomic,retain) SPTChurnLockViewController * churnViewController;              //@synthesize churnViewController=_churnViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SPTLogCenterProtocol> logCenter;                     //@synthesize logCenter=_logCenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTLogCenterProtocol>)logCenter;
-(void)setLogCenter:(id<SPTLogCenterProtocol>)arg1 ;
-(id)initWithLogCenter:(id)arg1 ;
-(void)churnlockControlledDidDowngrade:(id)arg1 ;
-(void)setDismissalBlock:(id)arg1 ;
-(void)dismissChurnLock;
-(void)presentChurnLock;
-(void)setChurnViewController:(SPTChurnLockViewController *)arg1 ;
-(SPTChurnLockViewController *)churnViewController;
-(void)dismissModalViewController:(id)arg1 ;
-(id)dismissalBlock;
-(void)presentModalViewController:(id)arg1 ;
@end

