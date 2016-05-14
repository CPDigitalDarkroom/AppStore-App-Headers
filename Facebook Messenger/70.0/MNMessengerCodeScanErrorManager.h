/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessengerCodeScanErrorPresenter;
@class FBTimer;

@interface MNMessengerCodeScanErrorManager : NSObject {

	int _invalidHashErrorsInTimeWindow;
	FBTimer* _invalidCodeTimer;
	id<MNMessengerCodeScanErrorPresenter> _presenter;

}

@property (assign,nonatomic,__weak) id<MNMessengerCodeScanErrorPresenter> presenter;              //@synthesize presenter=_presenter - In the implementation block
-(void)_resetInvalidHashErrors;
-(void)startScanSession;
-(void)stopScanSession;
-(void)recordFrameProcessedDidFailWithError:(int)arg1 ;
-(void)_reset;
-(id<MNMessengerCodeScanErrorPresenter>)presenter;
-(void)setPresenter:(id<MNMessengerCodeScanErrorPresenter>)arg1 ;
@end

