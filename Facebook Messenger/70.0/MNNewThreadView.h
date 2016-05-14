/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBToastContainerViewDelegate.h>

@class UIView, MNPeoplePickerView, FBToastContainerView, NSString;

@interface MNNewThreadView : UIView <FBToastContainerViewDelegate> {

	UIView* _composeView;
	MNPeoplePickerView* _peoplePickerView;
	UIView* _messagesView;
	CGRect _keyboardFrame;
	char _showsMessagesView;
	char _showsComposeView;
	FBToastContainerView* _toastContainerView;

}

@property (assign,nonatomic) CGRect keyboardFrame;                                     //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) char showsComposeView;                                    //@synthesize showsComposeView=_showsComposeView - In the implementation block
@property (nonatomic,readonly) float visibleContentHeight; 
@property (nonatomic,readonly) FBToastContainerView * toastContainerView;              //@synthesize toastContainerView=_toastContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)mn_topContentInset;
-(FBToastContainerView *)toastContainerView;
-(void)_toastContainerViewWillChangeWithDuration:(double)arg1 ;
-(void)toastContainerViewToastWillAppear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)toastContainerViewToastWillDisappear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(CGRect)_toastViewFrame;
-(void)_layoutToastView;
-(void)_layoutMainContent;
-(float)_keyboardTopY;
-(void)_layoutPeoplePickerView;
-(void)_layoutMessagesView;
-(float)_peoplePickerTokenFieldHeight;
-(float)_topToastOriginY;
-(float)_visibleToastHeight;
-(void)showsComposeView:(char)arg1 animated:(char)arg2 ;
-(id)initWithPeoplePickerView:(id)arg1 composeView:(id)arg2 ;
-(float)visibleContentHeight;
-(void)setMessagesView:(id)arg1 ;
-(void)setShowsMessagesView:(char)arg1 ;
-(void)updateComposeViewHeightWithDuration:(double)arg1 animationOptions:(unsigned)arg2 ;
-(void)setShowsComposeView:(char)arg1 ;
-(char)showsComposeView;
-(void)dealloc;
-(void)layoutSubviews;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(void)_layoutComposeView;
@end

