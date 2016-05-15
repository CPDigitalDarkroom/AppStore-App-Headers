/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/T1PersistentComposeViewControllerDelegate.h>
#import <Twitter/T1ComposeViewControllerDelegate.h>
#import <Twitter/T1SlideshowPresenter.h>
#import <Twitter/T1SlideshowViewControllerDelegate.h>
#import <Twitter/TFNImageTransitionDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <Twitter/T1DisplayTweetTranslationDelegate.h>
#import <Twitter/T1TweetDetailsNavigationContextItemDelegate.h>
#import <Twitter/T1TwitterPivotTableRowAdapterDelegate.h>
#import <Twitter/T1VideoMonetizationSettingsViewControllerDelegate.h>
#import <Twitter/T1ComposeCustomAction.h>
#import <Twitter/T1JumpBackToHomeTimelineBehavior.h>
#import <TFNUI/TFNLayoutMetricsEnvironment.h>

@class TFNStopwatch, NSMutableArray, T1TweetDetailsTweetBodyItems, TFNGenericItem, T1TweetDetailsErrorItem, NSString, NSDate, TFNTwitterStatus, TFNTwitterAccount, T1AppNavigationContext, TFNTwitterScribeContext, T1NativeCardItem, T1TweetDetailsNativeVideoItem, T1NativeCardItemTableRowAdapter, T1TwitterPivotTableRowAdapter, T1TweetDetailsNavigationContextItem, T1TweetDetailsActionContextItem, T1TweetDetailsMultiPhotoItem, T1TweetDetailsPromotedAccountItem, UIPopoverController, T1ConversationStream, T1TweetDetailsFetcher, NSAttributedString, T1PersistentComposeViewController, TFNTwitterTweetDetailsActionView, T1StatusMediaHandler, T1StatusTableSlideshowManager, TFNTwitterVideoMonetizationSettings;

@interface T1TweetDetailsViewController : TFNItemsDataViewController <T1PersistentComposeViewControllerDelegate, T1ComposeViewControllerDelegate, T1SlideshowPresenter, T1SlideshowViewControllerDelegate, TFNImageTransitionDelegate, TFNTwitterAuthenticated, UIPopoverControllerDelegate, T1DisplayTweetTranslationDelegate, T1TweetDetailsNavigationContextItemDelegate, T1TwitterPivotTableRowAdapterDelegate, T1VideoMonetizationSettingsViewControllerDelegate, T1ComposeCustomAction, T1JumpBackToHomeTimelineBehavior, TFNLayoutMetricsEnvironment> {

	TFNStopwatch* _viewWillAppearStopwatch;
	double _allRequiredPartsCompleteDuration;
	double _conversationCompleteDuration;
	NSMutableArray* _combinedAncestors;
	NSMutableArray* _combinedDescendants;
	NSMutableArray* _suggestedTweets;
	T1TweetDetailsTweetBodyItems* _bodyItems;
	TFNGenericItem* _activitySummaryItem;
	TFNGenericItem* _actionsItem;
	T1TweetDetailsErrorItem* _errorItem;
	TFNGenericItem* _inReplyToLabelItem;
	NSString* _promotedTweetHeader;
	struct {
		unsigned hasScribedTweetCompleteTime : 1;
		unsigned showingAncestorLoader : 1;
		unsigned hasPlayedVideo : 1;
		unsigned inUpdate : 1;
		unsigned sendingReply : 1;
		unsigned shouldScrollDownWhenFinishedUpdating : 1;
		unsigned showedSensitiveMedia : 1;
		unsigned hasDragged : 1;
		unsigned didScribeReply : 1;
		unsigned shouldForceScrollToBottomWhenFinishedUpdating : 1;
		unsigned shouldRenderCardNatively : 1;
		unsigned shouldSuppressText : 1;
		unsigned isTransitioningOnScreen : 1;
	}  _tweetDetailsFlags;
	NSString* _scribeSection;
	NSDate* _initialViewConversationDate;
	CGRect _currentKeyboardFrame;
	char _statusRecommendedByMagicRecs;
	char _isUserViewingTheirOwnProfile;
	char _holdUpdatesUntilScrollComplete;
	char _hasScribedVitEngagement;
	char _loadingVitEmbedSourceStatus;
	char _forceRefreshSensitiveMedia;
	char _isKeyboardShowing;
	char _directMessageInlineActionEnabled;
	char _defaultVideoMonetizationSettingsComplete;
	char _videoMonetizationSettingsComplete;
	TFNTwitterStatus* _status;
	TFNTwitterAccount* _account;
	T1AppNavigationContext* _navigationContext;
	TFNTwitterScribeContext* _sourceScribeContext;
	T1NativeCardItem* _nativeCardItem;
	T1TweetDetailsNativeVideoItem* _nativeVideoItem;
	TFNGenericItem* _sensitiveInterstitialItem;
	T1NativeCardItemTableRowAdapter* _nativeCardRowAdapter;
	T1TwitterPivotTableRowAdapter* _pivotAdapter;
	T1TweetDetailsNavigationContextItem* _navigationContextItem;
	T1TweetDetailsActionContextItem* _actionContextItem;
	T1TweetDetailsMultiPhotoItem* _mediaItem;
	T1TweetDetailsPromotedAccountItem* _promotedAccountItem;
	UIPopoverController* _autocompletePopoverController;
	T1ConversationStream* _conversationStream;
	T1TweetDetailsFetcher* _tweetDetailsFetcher;
	NSAttributedString* _originalTextAttributedString;
	TFNTwitterStatus* _vitEmbedSourceStatus;
	T1PersistentComposeViewController* _replyController;
	TFNTwitterTweetDetailsActionView* _tweetDetailsActionView;
	/*^block*/id _intentBlock;
	T1StatusMediaHandler* _statusMediaHandler;
	T1StatusTableSlideshowManager* _slideshowManager;
	unsigned _indicatorAnimationState;
	TFNTwitterVideoMonetizationSettings* _defaultVideoMonetizationSettings;
	TFNTwitterVideoMonetizationSettings* _videoMonetizationSettings;
	long long _statusID;

}

@property (nonatomic,readonly) T1TweetDetailsTweetBodyItems * bodyItems; 
@property (nonatomic,retain) T1NativeCardItem * nativeCardItem;                                                    //@synthesize nativeCardItem=_nativeCardItem - In the implementation block
@property (nonatomic,retain) T1TweetDetailsNativeVideoItem * nativeVideoItem;                                      //@synthesize nativeVideoItem=_nativeVideoItem - In the implementation block
@property (nonatomic,retain) TFNGenericItem * sensitiveInterstitialItem;                                           //@synthesize sensitiveInterstitialItem=_sensitiveInterstitialItem - In the implementation block
@property (nonatomic,retain) T1NativeCardItemTableRowAdapter * nativeCardRowAdapter;                               //@synthesize nativeCardRowAdapter=_nativeCardRowAdapter - In the implementation block
@property (nonatomic,retain) T1TwitterPivotTableRowAdapter * pivotAdapter;                                         //@synthesize pivotAdapter=_pivotAdapter - In the implementation block
@property (nonatomic,retain) T1TweetDetailsNavigationContextItem * navigationContextItem;                          //@synthesize navigationContextItem=_navigationContextItem - In the implementation block
@property (nonatomic,retain) T1TweetDetailsActionContextItem * actionContextItem;                                  //@synthesize actionContextItem=_actionContextItem - In the implementation block
@property (nonatomic,retain) T1TweetDetailsMultiPhotoItem * mediaItem;                                             //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) T1TweetDetailsPromotedAccountItem * promotedAccountItem;                              //@synthesize promotedAccountItem=_promotedAccountItem - In the implementation block
@property (assign,nonatomic) char holdUpdatesUntilScrollComplete;                                                  //@synthesize holdUpdatesUntilScrollComplete=_holdUpdatesUntilScrollComplete - In the implementation block
@property (nonatomic,readonly) char replyDisabled; 
@property (nonatomic,retain) UIPopoverController * autocompletePopoverController;                                  //@synthesize autocompletePopoverController=_autocompletePopoverController - In the implementation block
@property (nonatomic,retain) T1ConversationStream * conversationStream;                                            //@synthesize conversationStream=_conversationStream - In the implementation block
@property (nonatomic,retain) T1TweetDetailsFetcher * tweetDetailsFetcher;                                          //@synthesize tweetDetailsFetcher=_tweetDetailsFetcher - In the implementation block
@property (assign,nonatomic) long long statusID;                                                                   //@synthesize statusID=_statusID - In the implementation block
@property (nonatomic,copy) NSAttributedString * originalTextAttributedString;                                      //@synthesize originalTextAttributedString=_originalTextAttributedString - In the implementation block
@property (assign,nonatomic) char hasScribedVitEngagement;                                                         //@synthesize hasScribedVitEngagement=_hasScribedVitEngagement - In the implementation block
@property (nonatomic,retain) TFNTwitterStatus * vitEmbedSourceStatus;                                              //@synthesize vitEmbedSourceStatus=_vitEmbedSourceStatus - In the implementation block
@property (assign,nonatomic) char loadingVitEmbedSourceStatus;                                                     //@synthesize loadingVitEmbedSourceStatus=_loadingVitEmbedSourceStatus - In the implementation block
@property (assign,nonatomic) char forceRefreshSensitiveMedia;                                                      //@synthesize forceRefreshSensitiveMedia=_forceRefreshSensitiveMedia - In the implementation block
@property (nonatomic,retain) T1PersistentComposeViewController * replyController;                                  //@synthesize replyController=_replyController - In the implementation block
@property (nonatomic,retain) TFNTwitterTweetDetailsActionView * tweetDetailsActionView;                            //@synthesize tweetDetailsActionView=_tweetDetailsActionView - In the implementation block
@property (nonatomic,copy) id intentBlock;                                                                         //@synthesize intentBlock=_intentBlock - In the implementation block
@property (nonatomic,readonly) T1StatusMediaHandler * statusMediaHandler;                                          //@synthesize statusMediaHandler=_statusMediaHandler - In the implementation block
@property (nonatomic,readonly) T1StatusTableSlideshowManager * slideshowManager;                                   //@synthesize slideshowManager=_slideshowManager - In the implementation block
@property (assign,nonatomic) char isKeyboardShowing;                                                               //@synthesize isKeyboardShowing=_isKeyboardShowing - In the implementation block
@property (assign,nonatomic) unsigned indicatorAnimationState;                                                     //@synthesize indicatorAnimationState=_indicatorAnimationState - In the implementation block
@property (nonatomic,readonly) char directMessageInlineActionEnabled;                                              //@synthesize directMessageInlineActionEnabled=_directMessageInlineActionEnabled - In the implementation block
@property (nonatomic,readonly) id monetizationSettingsItem; 
@property (nonatomic,retain) TFNTwitterVideoMonetizationSettings * defaultVideoMonetizationSettings;               //@synthesize defaultVideoMonetizationSettings=_defaultVideoMonetizationSettings - In the implementation block
@property (nonatomic,retain) TFNTwitterVideoMonetizationSettings * videoMonetizationSettings;                      //@synthesize videoMonetizationSettings=_videoMonetizationSettings - In the implementation block
@property (assign,nonatomic) char defaultVideoMonetizationSettingsComplete;                                        //@synthesize defaultVideoMonetizationSettingsComplete=_defaultVideoMonetizationSettingsComplete - In the implementation block
@property (assign,nonatomic) char videoMonetizationSettingsComplete;                                               //@synthesize videoMonetizationSettingsComplete=_videoMonetizationSettingsComplete - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * status;                                                          //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                                        //@synthesize account=_account - In the implementation block
@property (assign,getter=isStatusRecommendedByMagicRecs,nonatomic) char statusRecommendedByMagicRecs;              //@synthesize statusRecommendedByMagicRecs=_statusRecommendedByMagicRecs - In the implementation block
@property (nonatomic,retain) T1AppNavigationContext * navigationContext;                                           //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * sourceScribeContext;                                        //@synthesize sourceScribeContext=_sourceScribeContext - In the implementation block
@property (assign,nonatomic) char isUserViewingTheirOwnProfile;                                                    //@synthesize isUserViewingTheirOwnProfile=_isUserViewingTheirOwnProfile - In the implementation block
@property (getter=isDisplayingNativeCard,nonatomic,readonly) char displayingNativeCard; 
@property (assign,nonatomic,__weak) id<TFNTwitterAVPlayerControllerSource> playerSource; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tweetDetailsViewControllerForStatus:(id)arg1 account:(id)arg2 ;
+(void)_logPromotedEvent:(int)arg1 forStatus:(id)arg2 withAccount:(id)arg3 ;
-(id)scribePage;
-(id)scribeContext;
-(id<TFNTwitterAVPlayerControllerSource>)playerSource;
-(id)initWithStatus:(id)arg1 account:(id)arg2 ;
-(id)scribeSection;
-(id)scribeComponent;
-(long long)statusID;
-(void)pivotTableRowAdapter:(id)arg1 logPivotImpression:(id)arg2 ;
-(void)pivotTableRowAdapter:(id)arg1 handleTapOnPivotView:(id)arg2 ;
-(id)initWithStatusID:(long long)arg1 account:(id)arg2 ;
-(id)t1_openURL:(id)arg1 fromSourceStatus:(id)arg2 ;
-(void)scribeImpressionWithParameters:(id)arg1 ;
-(void)composeViewControllerDidDismiss:(id)arg1 animated:(char)arg2 sent:(char)arg3 ;
-(char)allowsJumpBackToHomeTimeline;
-(id)scribeImpressionParameters;
-(id)autocompleteController;
-(TFNTwitterVideoMonetizationSettings *)videoMonetizationSettings;
-(id)autocompleteViewController;
-(void)_accountDidUpdate:(id)arg1 ;
-(T1AppNavigationContext *)navigationContext;
-(void)setNavigationContext:(T1AppNavigationContext *)arg1 ;
-(id)scribeSectionForIndexPath:(id)arg1 ;
-(TFNTwitterScribeContext *)sourceScribeContext;
-(void)setSourceScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(void)setStatusRecommendedByMagicRecs:(char)arg1 ;
-(void)startComposingInlineReply;
-(void)showFavoriteIntentConfirmation;
-(void)showRetweetIntentConfirmation;
-(void)showTweetAnalytics;
-(id)tweetCompositionFromCurrentContext;
-(void)setPlayerSource:(id<TFNTwitterAVPlayerControllerSource>)arg1 ;
-(id)t1_didSelectActiveRange:(id)arg1 inStatus:(id)arg2 ;
-(T1StatusTableSlideshowManager *)slideshowManager;
-(void)_replyAction;
-(CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3 ;
-(void)setPreviewImageHidden:(char)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3 ;
-(void)imageTransitionViewController:(id)arg1 willTransition:(char)arg2 object:(id)arg3 ;
-(char)imageTransitionViewController:(id)arg1 previewImageFrameIsAspectFillForObject:(id)arg2 ;
-(CGRect)imageTransitionViewController:(id)arg1 previewImageContentsRectForObject:(id)arg2 ;
-(CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3 ;
-(char)imageTransitionViewController:(id)arg1 shouldDismissPresentingViewControllerForObject:(id)arg2 ;
-(void)slideshow:(id)arg1 didSelectStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didDeleteStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didSelectUser:(id)arg2 ;
-(void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2 ;
-(void)slideshow:(id)arg1 didSelectSticker:(id)arg2 ;
-(id)t1_openURL:(id)arg1 fromSourceUser:(id)arg2 ;
-(void)composeBarViewController:(id)arg1 willSendComposition:(id)arg2 ;
-(void)composeBarViewController:(id)arg1 didSendComposition:(id)arg2 ;
-(void)composeBarViewControllerTransitionToFullComposer:(id)arg1 ;
-(void)handleComposeBarSizeChange:(id)arg1 ;
-(void)composeBarViewControllerDidBeginEditing:(id)arg1 ;
-(void)showAutocompleteViewController:(id)arg1 forComposeBarViewController:(id)arg2 ;
-(void)hideAutocompleteViewController:(id)arg1 forComposeBarViewController:(id)arg2 ;
-(void)itemWasSelected:(id)arg1 ;
-(void)toggleTranslatedTweet;
-(char)isDisplayingNativeCard;
-(void)_updateExperimentFlagsFromAccount;
-(void)_tweetDeleted:(id)arg1 ;
-(void)_compositionDidSend:(id)arg1 ;
-(T1StatusMediaHandler *)statusMediaHandler;
-(void)_removeReplyControllerFromViewControllerHierarchy;
-(char)_shouldShowFollowForwardItem;
-(void)_showRetweetsAction:(id)arg1 ;
-(void)_showFavoritesAction:(id)arg1 ;
-(TFNTwitterStatus *)vitEmbedSourceStatus;
-(void)_showVitSourceStatus;
-(char)hasScribedVitEngagement;
-(void)setHasScribedVitEngagement:(char)arg1 ;
-(id)_tweetTextView;
-(void)_handleVitContextWithTweetBodyArray:(id)arg1 ;
-(void)_handleNavigationContextWithTweetBodyArray:(id)arg1 ;
-(T1TweetDetailsTweetBodyItems *)bodyItems;
-(id)nativeMediaItem;
-(id)_itemForTagSet:(id)arg1 withItemForVideo:(id)arg2 ;
-(id)_itemForTagSet:(id)arg1 withItemForImage:(id)arg2 ;
-(id)_quotedStatusItem;
-(id)_collectionCarouselItem;
-(T1TweetDetailsPromotedAccountItem *)promotedAccountItem;
-(char)_shouldShowViewAnalyticsItem;
-(char)_shouldShowActivitySummary;
-(id)activitySummaryItem;
-(char)_shouldShowMonetizationSettings;
-(id)monetizationSettingsItem;
-(id)_actionsItem;
-(void)_tweetUpdated:(id)arg1 ;
-(void)_animateInActivitySummary;
-(void)_animateOutActivitySummary;
-(void)_updateActivitySummaryViewForActivityCellAtIndexPath:(id)arg1 ;
-(void)_updateActionViewForActivityCellAtIndexPath:(id)arg1 ;
-(char)_areAllRequiredPartsReady;
-(char)_areAllFetchesComplete;
-(TFNTwitterTweetDetailsActionView *)tweetDetailsActionView;
-(id)intentBlock;
-(void)setIntentBlock:(id)arg1 ;
-(id)_confirmFavoriteSheet;
-(void)_showIntentConfirmationActionSheet:(id)arg1 buttonType:(unsigned)arg2 ;
-(void)_runIntentBlockIfStatusFetched;
-(id)_retweetSheet;
-(char)_constructErrorSections:(id)arg1 ;
-(void)_setupFromStatus;
-(void)setIndicatorAnimationState:(unsigned)arg1 ;
-(T1TweetDetailsFetcher *)tweetDetailsFetcher;
-(char)isStatusRecommendedByMagicRecs;
-(id)_itemForTagSet:(id)arg1 itemForImage:(id)arg2 itemForVideo:(id)arg3 ;
-(void)_didTapTag:(id)arg1 itemForImage:(id)arg2 itemForVideo:(id)arg3 ;
-(void)presentSlideshowWithDataSource:(id)arg1 retain:(char)arg2 index:(int)arg3 transitionDelegate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)holdUpdatesUntilScrollComplete;
-(void)setHoldUpdatesUntilScrollComplete:(char)arg1 ;
-(id)_tweetBodyItems;
-(void)_checkIfTweetComplete;
-(void)_scrollToBottom;
-(unsigned)indicatorAnimationState;
-(void)_startLoadingIndicator;
-(NSAttributedString *)originalTextAttributedString;
-(void)_updateLoadingIndicatorWithDotsLength:(unsigned)arg1 ;
-(id)indexPathsForRowType:(int)arg1 ;
-(char)_cellIsCompletelyVisibleAtIndexPath:(id)arg1 ;
-(id)_indexPathOfTweetBodyTop;
-(float)_peekHeight;
-(char)_isReplyBarVisible;
-(id)_contructCallToActionErrorItem:(id)arg1 ;
-(id)_errorStatusForError:(id)arg1 ;
-(char)isKeyboardShowing;
-(void)_failedToLoadConversation:(id)arg1 ;
-(void)_didLoadConversation:(id)arg1 ;
-(void)_removeInReplyToLabelItem;
-(void)_updateConversation;
-(void)_tweetUpdated;
-(void)_combineAncestors;
-(void)_animateInDescendants;
-(void)_handleDisappearingReplyLabelForScrollView:(id)arg1 forceReload:(char)arg2 ;
-(void)_combineDescendants;
-(void)_combineSuggested;
-(void)_fetchMoreDescendantsIfNeeded;
-(unsigned long long)_forwardOptionIfRegisteredCardInStatus:(id)arg1 account:(id)arg2 ;
-(T1PersistentComposeViewController *)replyController;
-(char)directMessageInlineActionEnabled;
-(char)replyDisabled;
-(char)retweetDisabled;
-(void)_toggleRetweetOnCurrentStatusFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(char)shareTweetDisabled;
-(void)_presentShareTweetSheetFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(char)favoriteDisabled;
-(void)_toggleFavoriteOnCurrentStatus;
-(id)_moreSheet;
-(void)setTweetDetailsActionView:(TFNTwitterTweetDetailsActionView *)arg1 ;
-(id)_scribeElemetForStatus:(id)arg1 ;
-(id)_scribeComponentForStatus:(id)arg1 ;
-(void)_cardLogAppDownloadIfAppropriate:(id)arg1 ;
-(void)_favoriteFailed;
-(id)_undoRetweetSheet;
-(void)_configureActionView:(id)arg1 ;
-(void)_excludeDeletedStatus:(id)arg1 ;
-(void)_handleTweetDeleted:(id)arg1 ;
-(void)_updateTableFooter;
-(id)indexPathForStatus:(id)arg1 ;
-(id)_tweetCompositionFromCurrentContext;
-(void)_willSendInLineReply:(id)arg1 ;
-(void)_scribeReply;
-(void)_hideSuggestedStatusBelowViewController:(id)arg1 ;
-(void)_scrollToTopOfBodyAndPeek;
-(void)_adjustReplyBarHeight;
-(void)_addReplyControllerToViewControllerHierarchy;
-(void)_setTabBarShadowHidden:(char)arg1 onlyIfViewControllerViewIsVisible:(char)arg2 ;
-(char)_isReplyControllerInViewControllerHierarchy;
-(void)_setupReplyControllerIfNecessary;
-(void)_addAutocompleteView;
-(void)_removeAutocompleteView;
-(UIPopoverController *)autocompletePopoverController;
-(void)setAutocompletePopoverController:(UIPopoverController *)arg1 ;
-(void)_didSendReply;
-(void)_didFailSendReply;
-(void)_removeCompositionObservers;
-(void)_scribeSendReply;
-(void)_updateReplyBarForTraitCollection:(id)arg1 ;
-(char)_shouldDisplayReplyBarWithTraitCollection:(id)arg1 ;
-(void)_displayReplyBar;
-(void)_hideReplyBar;
-(id)previousVideoTimelineViewController;
-(void)_retweetFailed;
-(void)_nativeCardViewNeedsLayout:(id)arg1 ;
-(char)_needsNativeCardItem;
-(T1NativeCardItem *)nativeCardItem;
-(id)_cardScribePage;
-(void)_loadMagicRecInfo;
-(void)_loadVitEmbedContextTweet;
-(T1ConversationStream *)conversationStream;
-(void)setConversationStream:(T1ConversationStream *)arg1 ;
-(void)_updateReplyBar;
-(char)loadingVitEmbedSourceStatus;
-(void)setLoadingVitEmbedSourceStatus:(char)arg1 ;
-(void)setVitEmbedSourceStatus:(TFNTwitterStatus *)arg1 ;
-(T1TwitterPivotTableRowAdapter *)pivotAdapter;
-(void)setTweetDetailsFetcher:(T1TweetDetailsFetcher *)arg1 ;
-(void)_didFinishLoadingStatus:(id)arg1 ;
-(void)_didFinishLoadingRelationship:(id)arg1 ;
-(void)_didFinishLoadingTranslatedStatus:(id)arg1 ;
-(id)newReplyToLabel;
-(void)_fetchMonetizationSettingsIfNeeded;
-(CGRect)_containingViewFrameAboveKeyboardFrame:(CGRect)arg1 ;
-(char)_isSuggestedHeader:(id)arg1 ;
-(id)_indexPathOfTweetBodyBottom;
-(void)_animateOutItem:(id)arg1 ;
-(void)_configureActivitySummaryView:(id)arg1 ;
-(void)_fetchMonetizationSettingsForVideo:(id)arg1 ;
-(void)_fetchMonetizationSettingsDefaults;
-(void)setDefaultVideoMonetizationSettingsComplete:(char)arg1 ;
-(void)setDefaultVideoMonetizationSettings:(TFNTwitterVideoMonetizationSettings *)arg1 ;
-(void)_monetizationSettingsUpdated;
-(void)setVideoMonetizationSettings:(TFNTwitterVideoMonetizationSettings *)arg1 ;
-(void)setVideoMonetizationSettingsComplete:(char)arg1 ;
-(char)defaultVideoMonetizationSettingsComplete;
-(char)videoMonetizationSettingsComplete;
-(TFNTwitterVideoMonetizationSettings *)defaultVideoMonetizationSettings;
-(void)_didTapMonetizationSettings;
-(void)_updateMonetizationSettings;
-(char)_hasImageEntity;
-(TFNGenericItem *)sensitiveInterstitialItem;
-(id)_multiPhotoItemForStatus:(id)arg1 ;
-(T1TweetDetailsNativeVideoItem *)nativeVideoItem;
-(char)forceRefreshSensitiveMedia;
-(void)_showSensitiveMedia:(char)arg1 isPossiblySensitiveAppealable:(char)arg2 ;
-(void)setForceRefreshSensitiveMedia:(char)arg1 ;
-(void)_updateCellHeightIfNeededForItem:(id)arg1 ;
-(void)_cardLogAppDownload:(id)arg1 ;
-(CGRect)rectOfTweetBody;
-(id)_openUrl:(id)arg1 fromSourceStatus:(id)arg2 sourceUser:(id)arg3 ;
-(void)_setupSlideshowViewController:(id)arg1 ;
-(id)_imageItemWithURLForEntity:(id)arg1 getIndex:(int*)arg2 ;
-(void)_showTranslatingIndicator;
-(void)_hideTranslatedTweet;
-(void)_showTranslatedTweet;
-(void)_hideTranslatingIndicator;
-(void)_showTranslatingLogo:(char)arg1 indexPath:(id)arg2 ;
-(char)_cancelEditingIfAppropriateForTraitCollection:(id)arg1 ;
-(char)_needsToScrollToAboveSuggestedHeader;
-(char)_isSuggestedHeaderBelowViewport;
-(char)composeBarViewControllerShouldBeginEditingUponAppearing:(id)arg1 ;
-(void)videoMonetizationSettingsViewController:(id)arg1 didUpdateSettings:(id)arg2 ;
-(void)_didAutoRefreshStream:(id)arg1 ;
-(id)amplifyScribePage;
-(void)_animateInActivity;
-(CGRect)rectOfCardExpandingToViewController:(id)arg1 inWindow:(id)arg2 ;
-(void)toggleFavorited;
-(void)toggleRetweetOnCurrentStatusFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(char)isUserViewingTheirOwnProfile;
-(void)setIsUserViewingTheirOwnProfile:(char)arg1 ;
-(void)setNativeCardItem:(T1NativeCardItem *)arg1 ;
-(void)setNativeVideoItem:(T1TweetDetailsNativeVideoItem *)arg1 ;
-(void)setSensitiveInterstitialItem:(TFNGenericItem *)arg1 ;
-(T1NativeCardItemTableRowAdapter *)nativeCardRowAdapter;
-(void)setNativeCardRowAdapter:(T1NativeCardItemTableRowAdapter *)arg1 ;
-(void)setPivotAdapter:(T1TwitterPivotTableRowAdapter *)arg1 ;
-(T1TweetDetailsNavigationContextItem *)navigationContextItem;
-(void)setNavigationContextItem:(T1TweetDetailsNavigationContextItem *)arg1 ;
-(T1TweetDetailsActionContextItem *)actionContextItem;
-(void)setActionContextItem:(T1TweetDetailsActionContextItem *)arg1 ;
-(void)setPromotedAccountItem:(T1TweetDetailsPromotedAccountItem *)arg1 ;
-(void)setStatusID:(long long)arg1 ;
-(void)setOriginalTextAttributedString:(NSAttributedString *)arg1 ;
-(void)setReplyController:(T1PersistentComposeViewController *)arg1 ;
-(void)setIsKeyboardShowing:(char)arg1 ;
-(UIEdgeInsets)visibleContentInsetForView:(id)arg1 ;
-(void)fontSizeChanged;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(id)indexPathForItem:(id)arg1 ;
-(id)tfn_debugStrings;
-(void)dataViewDidUpdate:(char)arg1 ;
-(float)lengthOfLayoutGuide:(int)arg1 forEnvironment:(id)arg2 ;
-(float)tableViewHeightForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(char)shouldHighlightItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(id)scribe;
-(T1TweetDetailsMultiPhotoItem *)mediaItem;
-(void)setMediaItem:(T1TweetDetailsMultiPhotoItem *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)update:(char)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(TFNTwitterStatus *)status;
-(void)_updateInsets;
-(id)cardItem;
-(TFNTwitterAccount *)account;
@end

