/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPlatformDebugOpenURLViewControllerDelegate.h>

@protocol FBPlatformDebugActionHandling;
@class NSArray, NSString;

@interface FBPlatformDebugViewController : UITableViewController <FBPlatformDebugOpenURLViewControllerDelegate> {

	NSArray* _configuration;
	NSString* _appBridgeURLScheme;
	id<FBPlatformDebugActionHandling> _debugActionHandler;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSString * appBridgeURLScheme;                              //@synthesize appBridgeURLScheme=_appBridgeURLScheme - In the implementation block
@property (nonatomic,retain) id<FBPlatformDebugActionHandling> debugActionHandler;              //@synthesize debugActionHandler=_debugActionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                                         //@synthesize version=_version - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAppBridgeURLScheme:(id)arg1 version:(id)arg2 ;
-(id)analyticsModule;
-(char)fb_showAuxiliaryViewController;
-(void)platformDebugOpenURLViewControllerDidFinish:(id)arg1 ;
-(char)fb_showNavBarSearchField;
-(void)_debugSharingLink;
-(void)_debugSharingPhotos;
-(void)_debugSharingVideo;
-(void)_debugSharingOpenGraph;
-(void)_debugAppRequests;
-(void)_debugAppInvites;
-(void)_debugOGLike;
-(void)_debugPageLike;
-(void)_debugWebViewInstallFbrpcAL;
-(void)_debugWebViewOpenFbrpcAL;
-(void)_debugWebViewInstallFbrpcDL;
-(void)_debugWebViewOpenFbrpcDL;
-(id)_itemForIndexPath:(id)arg1 ;
-(id)_groupForSection:(int)arg1 ;
-(id<FBPlatformDebugActionHandling>)debugActionHandler;
-(NSString *)appBridgeURLScheme;
-(id)_squareTestImage:(int)arg1 ;
-(void)setDebugActionHandler:(id<FBPlatformDebugActionHandling>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(NSString *)version;
@end

