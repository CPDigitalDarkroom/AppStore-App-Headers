/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPTPopupTheme;
@class SPTPopupWindow, NSMutableArray, SPTPopupDialog;

@interface SPTPopupManager : NSObject {

	id<SPTPopupTheme> _theme;
	SPTPopupWindow* _window;
	NSMutableArray* _presentationQueue;
	SPTPopupDialog* _presentedPopup;

}

@property (nonatomic,retain) id<SPTPopupTheme> theme;                           //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) SPTPopupWindow * window;                           //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) NSMutableArray * presentationQueue;              //@synthesize presentationQueue=_presentationQueue - In the implementation block
@property (nonatomic,retain) SPTPopupDialog * presentedPopup;                   //@synthesize presentedPopup=_presentedPopup - In the implementation block
+(id)sharedManager;
-(char)presentPopupDialog:(id)arg1 ;
-(void)dismissPopupDialog:(id)arg1 ;
-(SPTPopupDialog *)presentedPopup;
-(id)sta_getPopupDynamicUpsellTitle;
-(id)sta_getPopupDynamicUpsellMessage;
-(id)sta_getPopupDynamicUpsellButtons;
-(void)tapDismissButton;
-(void)changePopupDialog:(id)arg1 toNewState:(int)arg2 ;
-(void)setPresentedPopup:(SPTPopupDialog *)arg1 ;
-(void)presentNextQueuedPopup;
-(char)isPresentingPopup;
-(void)willPresentPopup:(id)arg1 ;
-(void)loadWindow;
-(void)didPresentPopup:(id)arg1 ;
-(char)isPresentingPopup:(id)arg1 ;
-(void)willDismissPopup:(id)arg1 ;
-(void)didDismissPopup:(id)arg1 ;
-(SPTPopupWindow *)window;
-(id)init;
-(void)setWindow:(SPTPopupWindow *)arg1 ;
-(NSMutableArray *)presentationQueue;
-(id<SPTPopupTheme>)theme;
-(void)setTheme:(id<SPTPopupTheme>)arg1 ;
@end

