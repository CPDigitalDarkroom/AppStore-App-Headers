/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>
#import <Spotify/SPTThemableView.h>

@protocol SPTThemableViewLayoutDelegate, NSObject;
@class SPTTheme, NSString;

@interface SPTTinkerbellTooltipCloseButton : UIButton <SPTThemableView> {

	id<SPTThemableViewLayoutDelegate> _layoutDelegate;
	SPTTheme* _theme;
	id<NSObject> _themeSettingsChangeNotificationIdentifier;

}

@property (nonatomic,readonly) SPTTheme * theme;                                                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) id<NSObject> themeSettingsChangeNotificationIdentifier;               //@synthesize themeSettingsChangeNotificationIdentifier=_themeSettingsChangeNotificationIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)applyThemeLayout;
-(id<NSObject>)themeSettingsChangeNotificationIdentifier;
-(void)setThemeSettingsChangeNotificationIdentifier:(id<NSObject>)arg1 ;
-(id<SPTThemableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SPTThemableViewLayoutDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithTheme:(id)arg1 ;
-(SPTTheme *)theme;
@end

