/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBComposerDefaultAlbumSelectionBehaviour, FBComposerPublishButtonTextBehaviour, FBComposerPlaceholderBehaviour, FBComposerTitleTextBehaviour, FBComposerPrivacySetting, FBComposerForSaleConfiguration, FBComposerCreativeToolsTraits, FBComposerSaveDraftBehavior;

@interface FBComposerTraits : FBValueObject <NSCopying, NSCoding> {

	char _allowDraftRecovery;
	char _allowCachingOfResultantPublication;
	char _allowReactionAfterPublication;
	char _allowHashtags;
	char _allowLinkAttachments;
	char _scrapeLinkAttachments;
	char _allowPlaceTagging;
	char _allowPlaceAttachment;
	char _allowBackDate;
	char _allowQAndA;
	char _allowFaceDetection;
	char _startAttachmentUploadsImmediately;
	char _allowPhotoDragging;
	char _allowPhotoRemoving;
	char _isEditingReview;
	char _forceDirectedPost;
	char _allowShareDestinationUserEducation;
	char _allowStreamlinedComposer;
	char _forceSimpleSearchForMentions;
	char _allowPostingToNearbyMarketplace;
	char _allowModifyingCaptionsOnPhotos;
	char _shouldAllowVideosInAlbums;
	char _allowDisablingFeaturesInComposerDueToStartingStyle;
	char _allowMajorLifeEventTitleEditing;
	char _allowMagicStories;
	char _allowStickersAsAttachments;
	char _allowUserToChangeRedSpaceState;
	char _allowPrivacyEducation;
	char _allowVideoEditing;
	char _allowLivePhoto;
	char _allowSponsorTagging;
	char _allowPoll;
	char _allowMultiMediaPost;
	char _allow360Photo;
	char _allowMovies;
	unsigned _interfaceStyle;
	int _checkinSearchType;
	NSString* _publisherIdentifier;
	NSString* _composerAnalyticsType;
	unsigned _headerStyle;
	unsigned _mentioningPermission;
	unsigned _albumSelectionPermission;
	FBComposerDefaultAlbumSelectionBehaviour* _defaultAlbumSelectionBehaviour;
	unsigned _photoAttachmentPermission;
	unsigned _videoAttachmentPermission;
	unsigned _allowablePostOptionContentTypes;
	FBComposerPublishButtonTextBehaviour* _publishButtonTextBehaviour;
	unsigned _implicitPlaceTaggingPermission;
	unsigned _userTaggingPermission;
	unsigned _activityTaggingPermission;
	unsigned _zeroRatingSentryType;
	FBComposerPlaceholderBehaviour* _placeholderBehaviour;
	FBComposerTitleTextBehaviour* _titleTextBehaviour;
	unsigned _dismissalPermission;
	unsigned _publishPermission;
	unsigned _targetLoadType;
	unsigned _privacySettingSavePermission;
	unsigned _privacyDisplayBehavior;
	unsigned _userTaggingInMediaPermission;
	unsigned _authorLoadType;
	unsigned _privacySettingLoadType;
	FBComposerPrivacySetting* _initialPrivacySetting;
	unsigned _tagAnyoneInMentionsPermission;
	NSString* _mentionTagSearchContext;
	unsigned _allowPostExpirationOption;
	unsigned _launchKeyboardBehavior;
	unsigned _minimumLengthOfStatusTextForPostToBeConsideredPublishable;
	FBComposerForSaleConfiguration* _forSaleConfiguration;
	FBComposerCreativeToolsTraits* _creativeToolsTraits;
	unsigned _destinationChoosingType;
	unsigned _postCompositionAllowance;
	unsigned _feedTopicAllowance;
	unsigned _cameraType;
	unsigned _draftBehavior;
	unsigned _liveVideoBroadcastPermission;
	unsigned _cursorLaunchBehavior;
	FBComposerSaveDraftBehavior* _saveDraftBehavior;
	NSString* _feedbackSource;

}

@property (nonatomic,readonly) unsigned interfaceStyle;                                                                     //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (nonatomic,readonly) int checkinSearchType;                                                                       //@synthesize checkinSearchType=_checkinSearchType - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherIdentifier;                                                         //@synthesize publisherIdentifier=_publisherIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerAnalyticsType;                                                       //@synthesize composerAnalyticsType=_composerAnalyticsType - In the implementation block
@property (nonatomic,readonly) unsigned headerStyle;                                                                        //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,readonly) char allowDraftRecovery;                                                                     //@synthesize allowDraftRecovery=_allowDraftRecovery - In the implementation block
@property (nonatomic,readonly) char allowCachingOfResultantPublication;                                                     //@synthesize allowCachingOfResultantPublication=_allowCachingOfResultantPublication - In the implementation block
@property (nonatomic,readonly) char allowReactionAfterPublication;                                                          //@synthesize allowReactionAfterPublication=_allowReactionAfterPublication - In the implementation block
@property (nonatomic,readonly) unsigned mentioningPermission;                                                               //@synthesize mentioningPermission=_mentioningPermission - In the implementation block
@property (nonatomic,readonly) unsigned albumSelectionPermission;                                                           //@synthesize albumSelectionPermission=_albumSelectionPermission - In the implementation block
@property (nonatomic,copy,readonly) FBComposerDefaultAlbumSelectionBehaviour * defaultAlbumSelectionBehaviour;              //@synthesize defaultAlbumSelectionBehaviour=_defaultAlbumSelectionBehaviour - In the implementation block
@property (nonatomic,readonly) char allowHashtags;                                                                          //@synthesize allowHashtags=_allowHashtags - In the implementation block
@property (nonatomic,readonly) unsigned photoAttachmentPermission;                                                          //@synthesize photoAttachmentPermission=_photoAttachmentPermission - In the implementation block
@property (nonatomic,readonly) unsigned videoAttachmentPermission;                                                          //@synthesize videoAttachmentPermission=_videoAttachmentPermission - In the implementation block
@property (nonatomic,readonly) unsigned allowablePostOptionContentTypes;                                                    //@synthesize allowablePostOptionContentTypes=_allowablePostOptionContentTypes - In the implementation block
@property (nonatomic,readonly) char allowLinkAttachments;                                                                   //@synthesize allowLinkAttachments=_allowLinkAttachments - In the implementation block
@property (nonatomic,readonly) char scrapeLinkAttachments;                                                                  //@synthesize scrapeLinkAttachments=_scrapeLinkAttachments - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPublishButtonTextBehaviour * publishButtonTextBehaviour;                      //@synthesize publishButtonTextBehaviour=_publishButtonTextBehaviour - In the implementation block
@property (nonatomic,readonly) unsigned implicitPlaceTaggingPermission;                                                     //@synthesize implicitPlaceTaggingPermission=_implicitPlaceTaggingPermission - In the implementation block
@property (nonatomic,readonly) char allowPlaceTagging;                                                                      //@synthesize allowPlaceTagging=_allowPlaceTagging - In the implementation block
@property (nonatomic,readonly) char allowPlaceAttachment;                                                                   //@synthesize allowPlaceAttachment=_allowPlaceAttachment - In the implementation block
@property (nonatomic,readonly) char allowBackDate;                                                                          //@synthesize allowBackDate=_allowBackDate - In the implementation block
@property (nonatomic,readonly) unsigned userTaggingPermission;                                                              //@synthesize userTaggingPermission=_userTaggingPermission - In the implementation block
@property (nonatomic,readonly) unsigned activityTaggingPermission;                                                          //@synthesize activityTaggingPermission=_activityTaggingPermission - In the implementation block
@property (nonatomic,readonly) unsigned zeroRatingSentryType;                                                               //@synthesize zeroRatingSentryType=_zeroRatingSentryType - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPlaceholderBehaviour * placeholderBehaviour;                                  //@synthesize placeholderBehaviour=_placeholderBehaviour - In the implementation block
@property (nonatomic,copy,readonly) FBComposerTitleTextBehaviour * titleTextBehaviour;                                      //@synthesize titleTextBehaviour=_titleTextBehaviour - In the implementation block
@property (nonatomic,readonly) unsigned dismissalPermission;                                                                //@synthesize dismissalPermission=_dismissalPermission - In the implementation block
@property (nonatomic,readonly) unsigned publishPermission;                                                                  //@synthesize publishPermission=_publishPermission - In the implementation block
@property (nonatomic,readonly) unsigned targetLoadType;                                                                     //@synthesize targetLoadType=_targetLoadType - In the implementation block
@property (nonatomic,readonly) unsigned privacySettingSavePermission;                                                       //@synthesize privacySettingSavePermission=_privacySettingSavePermission - In the implementation block
@property (nonatomic,readonly) char allowQAndA;                                                                             //@synthesize allowQAndA=_allowQAndA - In the implementation block
@property (nonatomic,readonly) unsigned privacyDisplayBehavior;                                                             //@synthesize privacyDisplayBehavior=_privacyDisplayBehavior - In the implementation block
@property (nonatomic,readonly) char allowFaceDetection;                                                                     //@synthesize allowFaceDetection=_allowFaceDetection - In the implementation block
@property (nonatomic,readonly) unsigned userTaggingInMediaPermission;                                                       //@synthesize userTaggingInMediaPermission=_userTaggingInMediaPermission - In the implementation block
@property (nonatomic,readonly) unsigned authorLoadType;                                                                     //@synthesize authorLoadType=_authorLoadType - In the implementation block
@property (nonatomic,readonly) unsigned privacySettingLoadType;                                                             //@synthesize privacySettingLoadType=_privacySettingLoadType - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPrivacySetting * initialPrivacySetting;                                       //@synthesize initialPrivacySetting=_initialPrivacySetting - In the implementation block
@property (nonatomic,readonly) char startAttachmentUploadsImmediately;                                                      //@synthesize startAttachmentUploadsImmediately=_startAttachmentUploadsImmediately - In the implementation block
@property (nonatomic,readonly) char allowPhotoDragging;                                                                     //@synthesize allowPhotoDragging=_allowPhotoDragging - In the implementation block
@property (nonatomic,readonly) char allowPhotoRemoving;                                                                     //@synthesize allowPhotoRemoving=_allowPhotoRemoving - In the implementation block
@property (nonatomic,readonly) char isEditingReview;                                                                        //@synthesize isEditingReview=_isEditingReview - In the implementation block
@property (nonatomic,readonly) unsigned tagAnyoneInMentionsPermission;                                                      //@synthesize tagAnyoneInMentionsPermission=_tagAnyoneInMentionsPermission - In the implementation block
@property (nonatomic,copy,readonly) NSString * mentionTagSearchContext;                                                     //@synthesize mentionTagSearchContext=_mentionTagSearchContext - In the implementation block
@property (nonatomic,readonly) char forceDirectedPost;                                                                      //@synthesize forceDirectedPost=_forceDirectedPost - In the implementation block
@property (nonatomic,readonly) unsigned allowPostExpirationOption;                                                          //@synthesize allowPostExpirationOption=_allowPostExpirationOption - In the implementation block
@property (nonatomic,readonly) unsigned launchKeyboardBehavior;                                                             //@synthesize launchKeyboardBehavior=_launchKeyboardBehavior - In the implementation block
@property (nonatomic,readonly) char allowShareDestinationUserEducation;                                                     //@synthesize allowShareDestinationUserEducation=_allowShareDestinationUserEducation - In the implementation block
@property (nonatomic,readonly) char allowStreamlinedComposer;                                                               //@synthesize allowStreamlinedComposer=_allowStreamlinedComposer - In the implementation block
@property (nonatomic,readonly) char forceSimpleSearchForMentions;                                                           //@synthesize forceSimpleSearchForMentions=_forceSimpleSearchForMentions - In the implementation block
@property (nonatomic,readonly) unsigned minimumLengthOfStatusTextForPostToBeConsideredPublishable;                          //@synthesize minimumLengthOfStatusTextForPostToBeConsideredPublishable=_minimumLengthOfStatusTextForPostToBeConsideredPublishable - In the implementation block
@property (nonatomic,copy,readonly) FBComposerForSaleConfiguration * forSaleConfiguration;                                  //@synthesize forSaleConfiguration=_forSaleConfiguration - In the implementation block
@property (nonatomic,readonly) char allowPostingToNearbyMarketplace;                                                        //@synthesize allowPostingToNearbyMarketplace=_allowPostingToNearbyMarketplace - In the implementation block
@property (nonatomic,readonly) char allowModifyingCaptionsOnPhotos;                                                         //@synthesize allowModifyingCaptionsOnPhotos=_allowModifyingCaptionsOnPhotos - In the implementation block
@property (nonatomic,copy,readonly) FBComposerCreativeToolsTraits * creativeToolsTraits;                                    //@synthesize creativeToolsTraits=_creativeToolsTraits - In the implementation block
@property (nonatomic,readonly) unsigned destinationChoosingType;                                                            //@synthesize destinationChoosingType=_destinationChoosingType - In the implementation block
@property (nonatomic,readonly) char shouldAllowVideosInAlbums;                                                              //@synthesize shouldAllowVideosInAlbums=_shouldAllowVideosInAlbums - In the implementation block
@property (nonatomic,readonly) unsigned postCompositionAllowance;                                                           //@synthesize postCompositionAllowance=_postCompositionAllowance - In the implementation block
@property (nonatomic,readonly) char allowDisablingFeaturesInComposerDueToStartingStyle;                                     //@synthesize allowDisablingFeaturesInComposerDueToStartingStyle=_allowDisablingFeaturesInComposerDueToStartingStyle - In the implementation block
@property (nonatomic,readonly) char allowMajorLifeEventTitleEditing;                                                        //@synthesize allowMajorLifeEventTitleEditing=_allowMajorLifeEventTitleEditing - In the implementation block
@property (nonatomic,readonly) char allowMagicStories;                                                                      //@synthesize allowMagicStories=_allowMagicStories - In the implementation block
@property (nonatomic,readonly) char allowStickersAsAttachments;                                                             //@synthesize allowStickersAsAttachments=_allowStickersAsAttachments - In the implementation block
@property (nonatomic,readonly) unsigned feedTopicAllowance;                                                                 //@synthesize feedTopicAllowance=_feedTopicAllowance - In the implementation block
@property (nonatomic,readonly) unsigned cameraType;                                                                         //@synthesize cameraType=_cameraType - In the implementation block
@property (nonatomic,readonly) char allowUserToChangeRedSpaceState;                                                         //@synthesize allowUserToChangeRedSpaceState=_allowUserToChangeRedSpaceState - In the implementation block
@property (nonatomic,readonly) char allowPrivacyEducation;                                                                  //@synthesize allowPrivacyEducation=_allowPrivacyEducation - In the implementation block
@property (nonatomic,readonly) unsigned draftBehavior;                                                                      //@synthesize draftBehavior=_draftBehavior - In the implementation block
@property (nonatomic,readonly) unsigned liveVideoBroadcastPermission;                                                       //@synthesize liveVideoBroadcastPermission=_liveVideoBroadcastPermission - In the implementation block
@property (nonatomic,readonly) char allowVideoEditing;                                                                      //@synthesize allowVideoEditing=_allowVideoEditing - In the implementation block
@property (nonatomic,readonly) char allowLivePhoto;                                                                         //@synthesize allowLivePhoto=_allowLivePhoto - In the implementation block
@property (nonatomic,readonly) char allowSponsorTagging;                                                                    //@synthesize allowSponsorTagging=_allowSponsorTagging - In the implementation block
@property (nonatomic,readonly) char allowPoll;                                                                              //@synthesize allowPoll=_allowPoll - In the implementation block
@property (nonatomic,readonly) char allowMultiMediaPost;                                                                    //@synthesize allowMultiMediaPost=_allowMultiMediaPost - In the implementation block
@property (nonatomic,readonly) char allow360Photo;                                                                          //@synthesize allow360Photo=_allow360Photo - In the implementation block
@property (nonatomic,readonly) unsigned cursorLaunchBehavior;                                                               //@synthesize cursorLaunchBehavior=_cursorLaunchBehavior - In the implementation block
@property (nonatomic,readonly) char allowMovies;                                                                            //@synthesize allowMovies=_allowMovies - In the implementation block
@property (nonatomic,copy,readonly) FBComposerSaveDraftBehavior * saveDraftBehavior;                                        //@synthesize saveDraftBehavior=_saveDraftBehavior - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedbackSource;                                                              //@synthesize feedbackSource=_feedbackSource - In the implementation block
-(unsigned)draftBehavior;
-(NSString *)feedbackSource;
-(char)allowReactionAfterPublication;
-(NSString *)publisherIdentifier;
-(char)isEditingReview;
-(unsigned)interfaceStyle;
-(int)checkinSearchType;
-(NSString *)composerAnalyticsType;
-(char)allowDraftRecovery;
-(char)allowCachingOfResultantPublication;
-(unsigned)mentioningPermission;
-(unsigned)albumSelectionPermission;
-(FBComposerDefaultAlbumSelectionBehaviour *)defaultAlbumSelectionBehaviour;
-(char)allowHashtags;
-(unsigned)photoAttachmentPermission;
-(unsigned)videoAttachmentPermission;
-(unsigned)allowablePostOptionContentTypes;
-(char)allowLinkAttachments;
-(char)scrapeLinkAttachments;
-(FBComposerPublishButtonTextBehaviour *)publishButtonTextBehaviour;
-(unsigned)implicitPlaceTaggingPermission;
-(char)allowPlaceTagging;
-(char)allowPlaceAttachment;
-(char)allowBackDate;
-(unsigned)userTaggingPermission;
-(unsigned)activityTaggingPermission;
-(unsigned)zeroRatingSentryType;
-(FBComposerPlaceholderBehaviour *)placeholderBehaviour;
-(FBComposerTitleTextBehaviour *)titleTextBehaviour;
-(unsigned)dismissalPermission;
-(unsigned)publishPermission;
-(unsigned)targetLoadType;
-(unsigned)privacySettingSavePermission;
-(char)allowQAndA;
-(unsigned)privacyDisplayBehavior;
-(char)allowFaceDetection;
-(unsigned)userTaggingInMediaPermission;
-(unsigned)authorLoadType;
-(unsigned)privacySettingLoadType;
-(FBComposerPrivacySetting *)initialPrivacySetting;
-(char)startAttachmentUploadsImmediately;
-(char)allowPhotoDragging;
-(char)allowPhotoRemoving;
-(unsigned)tagAnyoneInMentionsPermission;
-(NSString *)mentionTagSearchContext;
-(char)forceDirectedPost;
-(unsigned)allowPostExpirationOption;
-(unsigned)launchKeyboardBehavior;
-(char)allowShareDestinationUserEducation;
-(char)allowStreamlinedComposer;
-(char)forceSimpleSearchForMentions;
-(unsigned)minimumLengthOfStatusTextForPostToBeConsideredPublishable;
-(FBComposerForSaleConfiguration *)forSaleConfiguration;
-(char)allowPostingToNearbyMarketplace;
-(char)allowModifyingCaptionsOnPhotos;
-(FBComposerCreativeToolsTraits *)creativeToolsTraits;
-(unsigned)destinationChoosingType;
-(char)shouldAllowVideosInAlbums;
-(unsigned)postCompositionAllowance;
-(char)allowDisablingFeaturesInComposerDueToStartingStyle;
-(char)allowMajorLifeEventTitleEditing;
-(char)allowMagicStories;
-(char)allowStickersAsAttachments;
-(unsigned)feedTopicAllowance;
-(char)allowUserToChangeRedSpaceState;
-(char)allowPrivacyEducation;
-(unsigned)liveVideoBroadcastPermission;
-(char)allowVideoEditing;
-(char)allowLivePhoto;
-(char)allowSponsorTagging;
-(char)allowPoll;
-(char)allowMultiMediaPost;
-(char)allow360Photo;
-(unsigned)cursorLaunchBehavior;
-(char)allowMovies;
-(FBComposerSaveDraftBehavior *)saveDraftBehavior;
-(id)initWithInterfaceStyle:(unsigned)arg1 checkinSearchType:(int)arg2 publisherIdentifier:(id)arg3 composerAnalyticsType:(id)arg4 headerStyle:(unsigned)arg5 allowDraftRecovery:(char)arg6 allowCachingOfResultantPublication:(char)arg7 allowReactionAfterPublication:(char)arg8 mentioningPermission:(unsigned)arg9 albumSelectionPermission:(unsigned)arg10 defaultAlbumSelectionBehaviour:(id)arg11 allowHashtags:(char)arg12 photoAttachmentPermission:(unsigned)arg13 videoAttachmentPermission:(unsigned)arg14 allowablePostOptionContentTypes:(unsigned)arg15 allowLinkAttachments:(char)arg16 scrapeLinkAttachments:(char)arg17 publishButtonTextBehaviour:(id)arg18 implicitPlaceTaggingPermission:(unsigned)arg19 allowPlaceTagging:(char)arg20 allowPlaceAttachment:(char)arg21 allowBackDate:(char)arg22 userTaggingPermission:(unsigned)arg23 activityTaggingPermission:(unsigned)arg24 zeroRatingSentryType:(unsigned)arg25 placeholderBehaviour:(id)arg26 titleTextBehaviour:(id)arg27 dismissalPermission:(unsigned)arg28 publishPermission:(unsigned)arg29 targetLoadType:(unsigned)arg30 privacySettingSavePermission:(unsigned)arg31 allowQAndA:(char)arg32 privacyDisplayBehavior:(unsigned)arg33 allowFaceDetection:(char)arg34 userTaggingInMediaPermission:(unsigned)arg35 authorLoadType:(unsigned)arg36 privacySettingLoadType:(unsigned)arg37 initialPrivacySetting:(id)arg38 startAttachmentUploadsImmediately:(char)arg39 allowPhotoDragging:(char)arg40 allowPhotoRemoving:(char)arg41 isEditingReview:(char)arg42 tagAnyoneInMentionsPermission:(unsigned)arg43 mentionTagSearchContext:(id)arg44 forceDirectedPost:(char)arg45 allowPostExpirationOption:(unsigned)arg46 launchKeyboardBehavior:(unsigned)arg47 allowShareDestinationUserEducation:(char)arg48 allowStreamlinedComposer:(char)arg49 forceSimpleSearchForMentions:(char)arg50 minimumLengthOfStatusTextForPostToBeConsideredPublishable:(unsigned)arg51 forSaleConfiguration:(id)arg52 allowPostingToNearbyMarketplace:(char)arg53 allowModifyingCaptionsOnPhotos:(char)arg54 creativeToolsTraits:(id)arg55 destinationChoosingType:(unsigned)arg56 shouldAllowVideosInAlbums:(char)arg57 postCompositionAllowance:(unsigned)arg58 allowDisablingFeaturesInComposerDueToStartingStyle:(char)arg59 allowMajorLifeEventTitleEditing:(char)arg60 allowMagicStories:(char)arg61 allowStickersAsAttachments:(char)arg62 feedTopicAllowance:(unsigned)arg63 cameraType:(unsigned)arg64 allowUserToChangeRedSpaceState:(char)arg65 allowPrivacyEducation:(char)arg66 draftBehavior:(unsigned)arg67 liveVideoBroadcastPermission:(unsigned)arg68 allowVideoEditing:(char)arg69 allowLivePhoto:(char)arg70 allowSponsorTagging:(char)arg71 allowPoll:(char)arg72 allowMultiMediaPost:(char)arg73 allow360Photo:(char)arg74 cursorLaunchBehavior:(unsigned)arg75 allowMovies:(char)arg76 saveDraftBehavior:(id)arg77 feedbackSource:(id)arg78 ;
-(unsigned)headerStyle;
-(unsigned)cameraType;
@end

