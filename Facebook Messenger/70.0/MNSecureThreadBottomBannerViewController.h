/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadBottomBannerViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNSecureThreadBottomBannerViewControllerDelegate;
@class MNThreadBottomBannerView, MNThreadParticipantNameFormatter, NSAttributedString, MNThreadViewModel, NSString;

@interface MNSecureThreadBottomBannerViewController : UIViewController <MNThreadBottomBannerViewDelegate, FBClassProvidable> {

	MNThreadBottomBannerView* _secureThreadBottomBannerView;
	MNThreadParticipantNameFormatter* _nameFormatter;
	NSAttributedString* _endedSecureThreadBottomBannerAttributedText;
	NSRange _deleteActionRange;
	NSAttributedString* _attributedText;
	MNThreadViewModel* _threadViewModel;
	id<MNSecureThreadBottomBannerViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) MNThreadViewModel * threadViewModel;                                                 //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNSecureThreadBottomBannerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)_initEndedSecureThreadBottomBannerAttributedString;
-(void)_updateAttributedText:(id)arg1 ;
-(void)threadBottomBannerView:(id)arg1 didTouchTextCheckingResult:(id)arg2 ;
-(void)setDelegate:(id<MNSecureThreadBottomBannerViewControllerDelegate>)arg1 ;
-(id<MNSecureThreadBottomBannerViewControllerDelegate>)delegate;
-(void)loadView;
@end

