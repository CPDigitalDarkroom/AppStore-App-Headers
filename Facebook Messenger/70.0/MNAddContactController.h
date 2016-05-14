/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessengerCodeViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBProvider;
@class MNAddContactViewController, FBLazyCreator, MNNavigationCoordinator, MNThreadNavigationCoordinator, FBUserSession, FBAnalytics, NSString;

@interface MNAddContactController : NSObject <ABPeoplePickerNavigationControllerDelegate, MNMessengerCodeViewControllerDelegate, FBClassProvidable> {

	id<FBProvider> _addContactViewControllerProvider;
	MNAddContactViewController* _addContactViewController;
	FBLazyCreator* _messengerCodeViewControllerCreator;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBUserSession* _session;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_initializeMessengerCodeViewControllerWithProvider:(id)arg1 ;
-(id)initWithAddContactViewControllerProvider:(id)arg1 messengerCodeViewControllerProvider:(id)arg2 navigationCoordinator:(id)arg3 threadNavigationCoordinator:(id)arg4 session:(id)arg5 analytics:(id)arg6 ;
-(char)_canPresentAddressBookPeoplePicker;
-(void)_presentAddContactViewController;
-(void)_presentContactAdditionOptionsActionSheet;
-(void)_presentAddContactViewControllerWithPhoneNumberString:(id)arg1 ;
-(void)_presentAddressBookPeoplePicker;
-(void)_presentMessengerCodeViewController;
-(void)messengerCodeViewControllerDidTapCancel:(id)arg1 ;
-(void)messengerCodeViewController:(id)arg1 didDecodeUserId:(id)arg2 ;
-(void)presentAddContactFlow;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
@end

