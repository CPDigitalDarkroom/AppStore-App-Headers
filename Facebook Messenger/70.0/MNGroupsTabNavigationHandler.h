/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPinGroupThreadCoordinatorDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNGroupsViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSimpleNewGroupViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSuggestedGroupsViewControllerDelegate.h>

@protocol FBProvider;
@class FBMThreadDescriptorFactory, MNPinGroupThreadCoordinator, MNSuggestedGroupsViewController, NSString;

@interface MNGroupsTabNavigationHandler : NSObject <MNPinGroupThreadCoordinatorDelegate, FBClassProvidable, MNGroupsViewControllerDelegate, MNSimpleNewGroupViewControllerDelegate, MNSuggestedGroupsViewControllerDelegate> {

	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _messageCVCoordinatorProvider;
	id<FBProvider> _groupsTabViewControllerProvider;
	id<FBProvider> _newGroupViewControllerProvider;
	id<FBProvider> _suggestedGroupsViewControllerProvider;
	id<FBProvider> _pinGroupThreadCoordinatorProvider;
	FBMThreadDescriptorFactory* _threadDescriptorFactory;
	MNPinGroupThreadCoordinator* _pinGroupThreadCoordinator;
	MNSuggestedGroupsViewController* _suggestedGroupsViewController;

}

@property (assign,nonatomic,__weak) MNSuggestedGroupsViewController * suggestedGroupsViewController;              //@synthesize suggestedGroupsViewController=_suggestedGroupsViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)pinGroupThreadCoordinatorDidCancel:(id)arg1 ;
-(void)pinGroupThreadCoordinator:(id)arg1 didFailToPinWithError:(id)arg2 ;
-(void)pinGroupThreadCoordinator:(id)arg1 didPinGroupThreadWithFbId:(id)arg2 ;
-(void)presentNewGroupViewWithSuggestedName:(id)arg1 entryPoint:(unsigned)arg2 animated:(char)arg3 ;
-(void)_cancelSuggestedGroupsViewController;
-(void)setSuggestedGroupsViewController:(MNSuggestedGroupsViewController *)arg1 ;
-(void)simpleNewGroupViewController:(id)arg1 didCreateGroupThreadWithKey:(id)arg2 ;
-(void)suggestedGroupsViewController:(id)arg1 didSelectGroup:(id)arg2 ;
-(MNSuggestedGroupsViewController *)suggestedGroupsViewController;
-(void)groupsViewController:(id)arg1 didSelectThreadWithFbId:(id)arg2 ;
-(void)groupsViewControllerDidTapCreate:(id)arg1 suggestedName:(id)arg2 entryPoint:(unsigned)arg3 ;
-(void)groupsViewControllerDidTapSuggestions:(id)arg1 ;
@end

