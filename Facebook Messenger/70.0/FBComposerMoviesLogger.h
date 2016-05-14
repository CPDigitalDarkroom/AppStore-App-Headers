/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString, NSMutableDictionary, NSArray;

@interface FBComposerMoviesLogger : NSObject {

	char _isActive;
	FBUserSession* _session;
	NSString* _experimentGroup;
	NSString* _module;
	NSMutableDictionary* _suggestedMoviesInfo;
	char _isUserOpenedComposer;
	char _isUserOpenedEditor;
	char _isUserOpenedMediaPicker;
	char _isUserStartedPublishingMovie;
	char _isUserPublishedMovie;
	char _isMovieContainsVideo;
	int _entryPoint;
	int _latestSelectedPhotoSource;
	unsigned _latestIndexOfSelectedSuggestion;
	unsigned _latestNumberOfAssetsForComposer;
	unsigned _latestNumberOfAssetsForEditor;
	unsigned _latestNumberOfPhotosForComposer;
	unsigned _latestNumberOfPhotosForEditor;
	unsigned _latestNumberOfVideosForComposer;
	unsigned _latestNumberOfVideosForEditor;
	unsigned _latestNumberOfTaggedCollaborators;
	NSArray* _latestOrderOfAssetsForComposer;
	NSArray* _latestOrderOfAssetsForEditor;
	unsigned _timesClosedComposer;
	unsigned _timesClosedEditor;
	unsigned _timesSwipedPreview;
	char _isTooltipNuxShown;
	NSString* _latestSelectedMoodID;
	unsigned _timesSelectedMoods;
	unsigned _timesConfirmedTitleChanged;
	unsigned _timesCancelledTitleChanged;
	unsigned _timesConfirmedAssetsChanged;
	unsigned _timesCancelledAssetsChanged;
	unsigned _timesReorderedAssets;
	unsigned _timesTappedDeleteButton;
	unsigned _timesDraggedToDelete;
	unsigned _timesMovedVideoSelector;
	unsigned _timesStartedVideoEditing;
	unsigned _timesConfirmedVideoEditing;
	unsigned _timesCancelledVideoEditing;
	unsigned _timesCancelledVideoExporting;
	unsigned _timesTappedMoreTab;
	NSString* _defaultSelectedMoodID;
	NSString* _publishedVideoID;
	NSString* _errorDescription;
	double _timeSpentInMediaPicker;
	double _timeSpentInEditor;
	double _timeSpentInComposer;
	double _lastTimePickerWasOpened;
	double _lastTimeEditorWasOpened;
	double _lastTimeComposerWasOpened;
	NSString* _composerSessionID;

}

@property (nonatomic,readonly) char isActive;                                  //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerSessionID;              //@synthesize composerSessionID=_composerSessionID - In the implementation block
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(NSString *)composerSessionID;
-(void)willShowSuggestedMovieAtIndex:(unsigned)arg1 withPhotoCount:(unsigned)arg2 ;
-(void)showedSuggestedMovies;
-(void)swipedPreviewFromIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(void)showedTooltipNux;
-(void)willOpenEditorFromSource:(int)arg1 ;
-(void)selectedSuggestionAtIndex:(unsigned)arg1 ;
-(id)_stringForEntryPoint:(int)arg1 ;
-(id)_stringForSelectedPhotoSource:(int)arg1 ;
-(id)_extraForSessionEvents;
-(void)startWithComposerSessionID:(id)arg1 ;
-(void)deactive;
-(void)enteredFromEntryPoint:(int)arg1 ;
-(void)openedMediaPicker;
-(void)openedEditorWithStorylineAssets:(id)arg1 ;
-(void)openedComposerWithStorylineAssets:(id)arg1 ;
-(void)closedComposer;
-(void)closedEditor;
-(void)startedPublishingMovie;
-(void)publishedMovieWithVideoID:(id)arg1 ;
-(void)failedPublishingMovieWithErrorDescription:(id)arg1 ;
-(void)cancelledComposerFlow;
-(void)selectedMoodWithID:(id)arg1 ;
-(void)confirmedTitleChanged;
-(void)cancelledTitleChanged;
-(void)confirmedAssetsChanged;
-(void)cancelledAssetsChanged;
-(void)reorderedAssets;
-(void)changedDefaultSelectedMoodWithID:(id)arg1 ;
-(void)cancelledMovieExporting;
-(void)tappedDeleteButton;
-(void)draggedToDelete;
-(void)movedVideoSelector;
-(void)startedVideoEditing;
-(void)confirmedVideoEditing;
-(void)cancelledVideoEditing;
-(void)tappedMoreTab;
-(void)taggedCollaboratorsWithCount:(unsigned)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(char)isActive;
-(void)_reset;
@end

