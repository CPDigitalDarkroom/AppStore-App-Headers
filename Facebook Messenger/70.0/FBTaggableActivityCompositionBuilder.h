/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, FBActivityPreviewTemplate, FBTaggableActivityEventObject, FBTypedNSArrayOfFBActivityIcon, FBMemPlaceFlowInfo;

@interface FBTaggableActivityCompositionBuilder : NSObject {

	NSString* _graphQLID;
	NSString* _presentParticiple;
	NSString* _taggableActivityID;
	NSString* _objectID;
	NSString* _iconID;
	NSString* _freeformObjectName;
	NSString* _objectLabel;
	NSString* _objectSubtext;
	NSString* _suggestionMechanism;
	NSURL* _smallIconURL;
	NSURL* _largeIconURL;
	NSURL* _profilePictureURL;
	NSURL* _glyphURL;
	char _showAttachmentPreview;
	char _hideAttachment;
	char _shouldCreateProfileBadge;
	FBActivityPreviewTemplate* _previewTemplate;
	FBActivityPreviewTemplate* _previewTemplateWithUser;
	FBActivityPreviewTemplate* _previewTemplateWithMultipleUsers;
	FBActivityPreviewTemplate* _previewTemplateWithUserAtPlace;
	FBActivityPreviewTemplate* _previewTemplateWithMultipleUsersAtPlace;
	FBActivityPreviewTemplate* _previewTemplateAtPlace;
	FBTaggableActivityEventObject* _eventObject;
	FBTypedNSArrayOfFBActivityIcon* _allIcons;
	FBTypedNSArrayOfFBActivityIcon* _objectIcons;
	FBMemPlaceFlowInfo* _associatedPlacesInfo;
	char _hasCustomIcon;
	char _isSelected;

}
+(id)taggableActivityComposition;
+(id)taggableActivityCompositionFromExistingTaggableActivityComposition:(id)arg1 ;
-(id)withGraphQLID:(id)arg1 ;
-(id)withPresentParticiple:(id)arg1 ;
-(id)withTaggableActivityID:(id)arg1 ;
-(id)withObjectID:(id)arg1 ;
-(id)withIconID:(id)arg1 ;
-(id)withFreeformObjectName:(id)arg1 ;
-(id)withObjectLabel:(id)arg1 ;
-(id)withObjectSubtext:(id)arg1 ;
-(id)withSuggestionMechanism:(id)arg1 ;
-(id)withSmallIconURL:(id)arg1 ;
-(id)withLargeIconURL:(id)arg1 ;
-(id)withProfilePictureURL:(id)arg1 ;
-(id)withGlyphURL:(id)arg1 ;
-(id)withShowAttachmentPreview:(char)arg1 ;
-(id)withHideAttachment:(char)arg1 ;
-(id)withShouldCreateProfileBadge:(char)arg1 ;
-(id)withPreviewTemplate:(id)arg1 ;
-(id)withPreviewTemplateWithUser:(id)arg1 ;
-(id)withPreviewTemplateWithMultipleUsers:(id)arg1 ;
-(id)withPreviewTemplateWithUserAtPlace:(id)arg1 ;
-(id)withPreviewTemplateWithMultipleUsersAtPlace:(id)arg1 ;
-(id)withPreviewTemplateAtPlace:(id)arg1 ;
-(id)withEventObject:(id)arg1 ;
-(id)withAllIcons:(id)arg1 ;
-(id)withObjectIcons:(id)arg1 ;
-(id)withAssociatedPlacesInfo:(id)arg1 ;
-(id)withHasCustomIcon:(char)arg1 ;
-(id)withIsSelected:(char)arg1 ;
-(id)build;
@end

