/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNComposerExtension.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol FBIntentHandler, MNComposerExtensionDelegate, MNComposerExtensionSendDelegate, MNComposerExtensionEditDelegate;
@class FBUserSession, MNComposerExtensionEventExperimentContext, MNComposerExtensionPopupPresentationStrategy, NSString, UIColor;

@interface MNComposerEventExtension : NSObject <MNComposerExtension, FBClassProvidable> {

	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	MNComposerExtensionEventExperimentContext* _experimentContext;
	MNComposerExtensionPopupPresentationStrategy* _presentationStrategy;
	id<MNComposerExtensionDelegate> _delegate;
	id<MNComposerExtensionSendDelegate> _sendDelegate;
	id<MNComposerExtensionEditDelegate> _editDelegate;
	NSString* _placeholderText;
	NSString* _searchPlaceholderText;
	UIColor* _tintColor;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionEditDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposerExtensionSendDelegate> sendDelegate;              //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholderText;                                    //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchPlaceholderText;                              //@synthesize searchPlaceholderText=_searchPlaceholderText - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                  //@synthesize tintColor=_tintColor - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_composerIcon;
-(char)shouldPromote;
-(void)didSelect:(char)arg1 source:(int)arg2 ;
-(char)shouldPresent:(char)arg1 source:(int)arg2 ;
-(void)extensionDidLongPress;
-(id)presentationStrategy;
-(int)inputSource;
-(char)isEligible;
-(id)subExtensions;
-(id<MNComposerExtensionSendDelegate>)sendDelegate;
-(void)setSendDelegate:(id<MNComposerExtensionSendDelegate>)arg1 ;
-(NSString *)searchPlaceholderText;
-(void)_initComposerExtensionEventExperimentContextIfNecessary;
-(void)_showCreateEventFailure;
-(void)setEditDelegate:(id<MNComposerExtensionEditDelegate>)arg1 ;
-(id<MNComposerExtensionEditDelegate>)editDelegate;
-(NSString *)placeholderText;
-(void)tearDown;
-(void)setDelegate:(id<MNComposerExtensionDelegate>)arg1 ;
-(id<MNComposerExtensionDelegate>)delegate;
-(int)category;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)tabBarItem;
-(int)soundName;
-(void)setUp;
-(char)supportsLongPress;
-(char)isThirdParty;
-(id)extensionIdentifier;
@end

