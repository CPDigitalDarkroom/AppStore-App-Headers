/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableAttributedString, NSTimer;

@interface FBMNetworkMonitorView : UIView {

	UILabel* _networkLabel;
	UILabel* _ligerLabel;
	UILabel* _numJobsInDeltaPreparerErrorHander;
	NSMutableAttributedString* _fetchersText;
	NSTimer* _timer;
	char _networkActivityVisible;

}

@property (assign,nonatomic) char networkActivityVisible;              //@synthesize networkActivityVisible=_networkActivityVisible - In the implementation block
-(void)setNetworkActivityVisible:(char)arg1 ;
-(void)showLigerEnabled:(char)arg1 ;
-(void)showFetcher:(id)arg1 type:(unsigned)arg2 ;
-(void)setNumberOfJobsInDeltaPreparerErrorHandler:(unsigned)arg1 ;
-(void)_didTimeout:(id)arg1 ;
-(char)networkActivityVisible;
-(void)_ensureTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

