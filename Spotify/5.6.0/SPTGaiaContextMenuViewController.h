/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Spotify/SPTContextMenuViewDataSource.h>
#import <Spotify/SPTContextMenuViewDelegate.h>

@protocol SPTContextMenuViewInteractionTarget;
@class SPTTheme, SPTContextMenuView, NSString;

@interface SPTGaiaContextMenuViewController : UIViewController <SPTContextMenuViewDataSource, SPTContextMenuViewDelegate> {

	id<SPTContextMenuViewInteractionTarget> _interactionTarget;
	SPTTheme* _theme;

}

@property (nonatomic,retain) SPTContextMenuView * view; 
@property (nonatomic,retain) id<SPTContextMenuViewInteractionTarget> interactionTarget;              //@synthesize interactionTarget=_interactionTarget - In the implementation block
@property (nonatomic,retain) SPTTheme * theme;                                                       //@synthesize theme=_theme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPTContextMenuViewInteractionTarget>)interactionTarget;
-(unsigned)numberOfActionsInContextMenuView:(id)arg1 ;
-(id)contextMenuView:(id)arg1 actionForRow:(unsigned)arg2 ;
-(id)contextMenuView:(id)arg1 titleForHeaderInSection:(unsigned)arg2 ;
-(unsigned)contextMenuView:(id)arg1 numberOfActionsInSection:(unsigned)arg2 ;
-(unsigned)numberOfSectionsInContextMenuView:(id)arg1 ;
-(id)contextMenuView:(id)arg1 actionForIndexPath:(id)arg2 ;
-(void)dismissContextMenuView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInteractionTarget:(id<SPTContextMenuViewInteractionTarget>)arg1 ;
-(id)imageForIcon:(int)arg1 ;
-(id)imageForIcon:(int)arg1 color:(id)arg2 ;
-(id)init;
-(void)loadView;
-(SPTTheme *)theme;
-(void)setTheme:(SPTTheme *)arg1 ;
@end

