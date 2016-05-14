/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAppService.h>

@protocol FBPhotoTagSuggestionModelOperation;
@class FBUserSession, NSString;

@interface FBPhotoTagSuggestionManager : NSObject <FBAppService> {

	char _autoCreateTags;
	FBUserSession* _session;
	double _lastTimeoutTime;
	NSString* _reasonForDisableAutoTagging;
	id<FBPhotoTagSuggestionModelOperation> _modelOperation;

}

@property (nonatomic,copy) NSString * reasonForDisableAutoTagging;                               //@synthesize reasonForDisableAutoTagging=_reasonForDisableAutoTagging - In the implementation block
@property (nonatomic,retain) id<FBPhotoTagSuggestionModelOperation> modelOperation;              //@synthesize modelOperation=_modelOperation - In the implementation block
@property (nonatomic,readonly) char autoCreateTags;                                              //@synthesize autoCreateTags=_autoCreateTags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)startAppService;
-(void)stopAppService;
-(unsigned)serviceStartupLevel;
-(void)enableAutoCreateTags;
-(char)autoCreateTags;
-(void)createAutoTagsForAssetIDIfNeeded:(id)arg1 completionWithTagCreationBlock:(/*^block*/id)arg2 ;
-(void)fetchAndInsertSuggestionForFaceCropJPEGs:(id)arg1 assetID:(id)arg2 withScenePath:(id)arg3 completionWithTagCreationBlock:(/*^block*/id)arg4 ;
-(void)saveNamedFaces:(id)arg1 withAssetID:(id)arg2 suggestionLoaded:(unsigned)arg3 completionBlock:(/*^block*/id)arg4 ;
-(char)faceboxesMissingRecognitionResults:(id)arg1 ;
-(void)loadStoredFaceFeatures:(char)arg1 andTags:(char)arg2 withAssetID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setReasonForDisableAutoTagging:(NSString *)arg1 ;
-(void)disableAutoCreateTagsForReason:(id)arg1 ;
-(id<FBPhotoTagSuggestionModelOperation>)modelOperation;
-(void)_fetchAndInsertSuggestionsWithRequest:(id)arg1 assetID:(id)arg2 numberOfFaceboxes:(unsigned)arg3 completionWithTagCreationBlock:(/*^block*/id)arg4 ;
-(id)_suggestionsEdgeSetFromSuggestionsArray:(id)arg1 ;
-(void)_saveFaceboxTagSuggestions:(id)arg1 forAsset:(id)arg2 uuidToFaceboxes:(id)arg3 completionWithTagCreationBlock:(/*^block*/id)arg4 ;
-(void)_logNetworkRequest:(id)arg1 success:(char)arg2 status:(id)arg3 event:(id)arg4 extra:(id)arg5 ;
-(void)disableAutoCreateTagsForTimeout:(double)arg1 ;
-(id)fetchFaceFeatureForAssetIDs:(id)arg1 ;
-(void)cleanupFacerecEdgesByPhotoAssetIDs:(id)arg1 ;
-(NSString *)reasonForDisableAutoTagging;
-(void)setModelOperation:(id<FBPhotoTagSuggestionModelOperation>)arg1 ;
-(id)_tagSuggestionFromDictionary:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

