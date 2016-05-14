/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNImportedContactCardViewListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNContactImportDialogDismissalListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBImportedContactRemover;
@class MNCDNProfileImageDownloader, MNThreadParticipantNameFormatter, MNNavigationCoordinator, MNNewThreadNavigationCoordinator, MNConversationContact, MNContactImportDialogViewController, NSString;

@interface MNPeopleViewImportedContactCardPresenter : NSObject <MNImportedContactCardViewListener, MNContactImportDialogDismissalListener, FBClassProvidable> {

	MNCDNProfileImageDownloader* _profileImageDownloader;
	id<FBImportedContactRemover> _importedContactRemover;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNNavigationCoordinator* _navigationCoordinator;
	MNNewThreadNavigationCoordinator* _newThreadNavigationCoordinator;
	MNConversationContact* _conversationContact;
	MNContactImportDialogViewController* _viewController;

}

@property (nonatomic,retain) MNConversationContact * conversationContact;                       //@synthesize conversationContact=_conversationContact - In the implementation block
@property (nonatomic,retain) MNContactImportDialogViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)mainActionButtonTapped;
-(void)primaryAuxiliaryButtonTapped;
-(void)secondaryAuxiliaryButtonTapped;
-(void)contactImportDialogDismissed;
-(id)initWithNavigationCoordinator:(id)arg1 newThreadNavigationCoordinator:(id)arg2 profileImageDownloader:(id)arg3 importedContactRemover:(id)arg4 nameFormatter:(id)arg5 ;
-(void)setConversationContact:(MNConversationContact *)arg1 ;
-(void)presentContactCardForConversationContact:(id)arg1 ;
-(MNConversationContact *)conversationContact;
-(void)setViewController:(MNContactImportDialogViewController *)arg1 ;
-(MNContactImportDialogViewController *)viewController;
@end

