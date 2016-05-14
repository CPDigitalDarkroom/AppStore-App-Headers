/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface FBSettingsSingleTextFieldViewController : UIViewController <UITextFieldDelegate> {

	UITextField* _urlTextField;
	NSString* _staticText;

}

@property (nonatomic,copy) NSString * staticText;                       //@synthesize staticText=_staticText - In the implementation block
@property (nonatomic,readonly) UITextField * urlTextField;              //@synthesize urlTextField=_urlTextField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextField *)urlTextField;
-(NSString *)staticText;
-(void)setStaticText:(NSString *)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(char)textFieldShouldReturn:(id)arg1 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

