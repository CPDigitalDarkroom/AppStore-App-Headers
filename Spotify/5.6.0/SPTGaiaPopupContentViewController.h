/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SPTGaiaDevice, SPTGaiaPopupContentView, SPTTheme, SPTGaiaDeviceAppearanceMapping;

@interface SPTGaiaPopupContentViewController : UIViewController {

	SPTGaiaDevice* _device;
	int _type;
	SPTGaiaPopupContentView* _contentView;
	SPTTheme* _theme;
	SPTGaiaDeviceAppearanceMapping* _appearanceMapping;

}

@property (nonatomic,retain) SPTGaiaDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) int type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SPTGaiaPopupContentView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) SPTTheme * theme;                                                //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) SPTGaiaDeviceAppearanceMapping * appearanceMapping;              //@synthesize appearanceMapping=_appearanceMapping - In the implementation block
-(SPTGaiaDeviceAppearanceMapping *)appearanceMapping;
-(void)setAppearanceMapping:(SPTGaiaDeviceAppearanceMapping *)arg1 ;
-(id)imageForDevice:(id)arg1 ;
-(id)deviceNameForPopupType:(int)arg1 ;
-(id)initWithType:(int)arg1 theme:(id)arg2 deviceIconMapper:(id)arg3 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)loadView;
-(SPTGaiaPopupContentView *)contentView;
-(void)setContentView:(SPTGaiaPopupContentView *)arg1 ;
-(SPTGaiaDevice *)device;
-(SPTTheme *)theme;
-(void)setTheme:(SPTTheme *)arg1 ;
-(void)setDevice:(SPTGaiaDevice *)arg1 ;
@end

