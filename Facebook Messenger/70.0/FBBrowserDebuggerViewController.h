/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class FBUserSession, FBBrowserDebuggerTextCellView, UITableViewCell;

@interface FBBrowserDebuggerViewController : UITableViewController {

	FBUserSession* _session;
	FBBrowserDebuggerTextCellView* _URLTextFieldCell;
	UITableViewCell* _initiatePrefetchButtonCell;
	UITableViewCell* _launchBrowserButtonCell;
	UITableViewCell* _launchBrowserWithSurfaceAboveNavBarButtonCell;
	UITableViewCell* _launchBrowserWithSurfaceBetweenNavBarAndWebViewButtonCell;
	UITableViewCell* _launchBrowserWithSurfaceAboveFooterBarButtonCell;
	UITableViewCell* _launchVanillaWebViewButtonCell;
	UITableViewCell* _prefetchingIndicatorSwitchCell;

}
-(char)fb_showNavBarSearchField;
-(void)_prefetchIndicatorsSwitchValueChanged:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

