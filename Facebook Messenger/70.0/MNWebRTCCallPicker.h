/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol MNWebRTCCallPickerDelegate;
@class UIActionSheet, UIAlertController, NSArray, MNNavigationCoordinator, NSString;

@interface MNWebRTCCallPicker : NSObject <UIActionSheetDelegate> {

	UIActionSheet* _presentedActionSheet;
	UIAlertController* _presentedAlertController;
	NSArray* _callButtonOptions;
	MNNavigationCoordinator* _navigationCoordinator;
	id<MNWebRTCCallPickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNWebRTCCallPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNavigationCoordinator:(id)arg1 ;
-(id)_displayStringsForActionSheetButtons:(id)arg1 ;
-(void)_showAlertControllerFromRect:(CGRect)arg1 inView:(id)arg2 callButtonOptions:(id)arg3 ;
-(void)_showActionSheetFromRect:(CGRect)arg1 inView:(id)arg2 callButtonOptions:(id)arg3 ;
-(void)_dismissAlertController;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 callButtonOptions:(id)arg3 ;
-(void)setDelegate:(id<MNWebRTCCallPickerDelegate>)arg1 ;
-(id<MNWebRTCCallPickerDelegate>)delegate;
-(void)dismissAnimated:(char)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end

